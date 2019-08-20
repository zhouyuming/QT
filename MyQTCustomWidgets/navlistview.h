#ifndef NAVLISTVIEW_H
#define NAVLISTVIEW_H

#include <QStyledItemDelegate>
#include <QAbstractListModel>
#include <QListView>
#include <vector>

#include <QPainter>
#include <QFile>
//#include "qdom.h"
#include <QDomDocument>
#include "qdebug.h"

class NavListView;

class NavModel : public QAbstractListModel
{
    Q_OBJECT
public:
    NavModel(QObject *parent);
    ~NavModel();

public:
    struct TreeNode {
        QString label;
        int level;
        bool collapse;
        bool theLast;
        QString info;
        std::list<TreeNode *> children;
    };

    struct ListNode {
        QString label;
        TreeNode *treeNode;
    };

protected:
    int rowCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

private:
    std::vector<TreeNode *> treeNode;
    std::vector<ListNode> listNode;

public slots:
    void readData(QString path);
    void setData(QStringList listItem);
    void collapse(const QModelIndex &index);

private:
    void refreshList();
};

class NavListView : public QListView
{
    Q_OBJECT
public:
    enum IcoStyle {IcoStyle_Cross = 0, IcoStyle_Triangle = 1};
    NavListView(QWidget *parent);
    ~NavListView();

private:
    NavModel *model;
    //NavDelegate *delegate;

    bool infoVisible;           //是否显示提示信息
    bool lineVisible;           //是否显示分割线条
    bool icoColorBg;            //伸缩图片是否使用颜色
    IcoStyle style;             //图标样式

    QColor colorLine;           //线条颜色

    QColor colorBgNormal;       //正常背景色
    QColor colorBgSelected;     //选中背景色
    QColor colorBgHover;        //悬停背景色

    QColor colorTextNormal;     //正常文字颜色
    QColor colorTextSelected;   //选中文字颜色
    QColor colorTextHover;      //悬停文字颜色
};

#endif // NAVLISTVIEW_H
