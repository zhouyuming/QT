#include "navlistview.h"

NavModel::NavModel(QObject *parent)	: QAbstractListModel(parent)
{

}

NavModel::~NavModel()
{
    for (std::vector<TreeNode *>::iterator it = treeNode.begin(); it != treeNode.end();) {
        for (std::list<TreeNode *>::iterator child = (*it)->children.begin(); child != (*it)->children.end();) {
            delete(*child);
            child = (*it)->children.erase(child);
        }

        delete(*it);
        it = treeNode.erase(it);
    }
}

void NavModel::readData(QString path)
{
    QFile xml(path);

    if (!xml.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QDomDocument doc;

    if (!doc.setContent(&xml, false)) {
        return;
    }

    treeNode.clear();
    listNode.clear();

    QDomNode root = doc.documentElement().firstChildElement("layout");
    QDomNodeList children = root.childNodes();

    for (int i = 0; i != children.count(); ++i) {
        QDomElement nodeInfo = children.at(i).toElement();
        TreeNode *node = new TreeNode;
        node->label = nodeInfo.attribute("label");
        node->collapse = nodeInfo.attribute("collapse").toInt();
        node->info = nodeInfo.attribute("info");
        node->level = 1;

        QDomNodeList secondLevel = nodeInfo.childNodes();

        for (int j = 0; j != secondLevel.count(); ++j) {
            QDomElement secNodeInfo = secondLevel.at(j).toElement();
            TreeNode *secNode = new TreeNode;
            secNode->label = secNodeInfo.attribute("label");
            secNode->info = secNodeInfo.attribute("info");
            secNode->collapse = false;
            secNode->level = 2;
            secNode->theLast = (j == secondLevel.count() - 1 && i != children.count() - 1);
            node->children.push_back(secNode);
        }

        treeNode.push_back(node);
    }

    refreshList();
    beginResetModel();
    endResetModel();
}

NavListView::NavListView(QWidget *parent) : QListView(parent)
{

}

NavListView::~NavListView()
{
    infoVisible = true;
    lineVisible = true;
    icoColorBg = false;

    style = NavListView::IcoStyle_Cross;

    colorLine = QColor(214, 216, 224);

    colorBgNormal = QColor(239, 241, 250);
    colorBgSelected = QColor(133, 153, 216);
    colorBgHover = QColor(209, 216, 240);

    colorTextNormal = QColor(58, 58, 58);
    colorTextSelected = QColor(255, 255, 255);
    colorTextHover = QColor(59, 59, 59);

    this->setMouseTracking(true);
    model = new NavModel(this);
    //delegate = new NavDelegate(this);
    //connect(this, SIGNAL(doubleClicked(QModelIndex)), model, SLOT(collapse(QModelIndex)));

}
