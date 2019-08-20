#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QStackedWidget>

#include "q7seg.h"
#include "qpot.h"
#include "qpot1.h"
#include "qpotmet.h"
#include "qcol.h"
#include "navlistview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_listView_pressed(QModelIndex);

private:
    Q7seg *q7seg1;
    Q7seg *q7seg2;
    Q7seg *q7seg3;
    QPot *qpot;
    QPot1 *qpot1;
    QPotMet *qpotmet;
    QCol *qcol;
    NavListView *listView;
    QStackedWidget *mainStackedWidget;
    QWidget *q7segWidget;
    QWidget *qpotWidget;
    QWidget *qpot1Widget;
    QWidget *qpotmetWidget;
    QWidget *qcolWidget;
};

#endif // MAINWINDOW_H
