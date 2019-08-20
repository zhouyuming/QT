#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(1200,800);
    QWidget *mainWidget = new QWidget();
    setCentralWidget(mainWidget);
    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainWidget->setLayout(mainLayout);

    QHBoxLayout *listViewLayout = new QHBoxLayout();
    mainLayout->addLayout(listViewLayout, 1);

    mainStackedWidget = new QStackedWidget();
    mainLayout->addWidget(mainStackedWidget, 4);

    listView = new NavListView(NULL);

    QStringList listItem;
    //listItem.append("主界面||0|游龙");

    listItem.append("显示控件||0|");
    listItem.append("七段数码管|显示控件||");
    listItem.append("位置调整|显示控件||");
    listItem.append("地图编辑|显示控件||");

    listItem.append("控制控件||0|");
    listItem.append("Potentiometer|控制控件||");
    listItem.append("Potentiometer1|控制控件||");
    listItem.append("Potentiometer2|控制控件||");
    listItem.append("RGBA color selector|控制控件||");
    listItem.append("Power button|控制控件||");

    listItem.append("信息管理||0|");
    listItem.append("学生管理|信息管理|0|");
    listItem.append("教师管理|信息管理|0|");
    listItem.append("成绩管理|信息管理|0|");

    listItem.append("帮助文档||1|");

    listView->setData(listItem);

    connect(listView, SIGNAL(pressed(QModelIndex)), this, SLOT(on_listView_pressed(QModelIndex)));

    listViewLayout->addWidget(listView);

    q7segWidget = new QWidget();
    mainStackedWidget->addWidget(q7segWidget);
    QHBoxLayout *q7segLayout = new QHBoxLayout();
    q7segWidget->setLayout(q7segLayout);
    q7seg1 = new Q7seg();
    q7seg1->setNumber(0);
    q7seg2 = new Q7seg();
    q7seg2->setNumber(1);
    q7seg3 = new Q7seg();
    q7seg3->setNumber(2);
    q7segLayout->addWidget(q7seg1);
    q7segLayout->addWidget(q7seg2);
    q7segLayout->addWidget(q7seg3);

    qpotWidget = new QWidget();
    mainStackedWidget->addWidget(qpotWidget);
    QHBoxLayout *qpotLayout = new QHBoxLayout();
    qpotWidget->setLayout(qpotLayout);
    qpot = new QPot();
    qpotLayout->addWidget(qpot);

    qpot1Widget = new QWidget();
    mainStackedWidget->addWidget(qpot1Widget);
    QHBoxLayout *qpot1Layout = new QHBoxLayout();
    qpot1Widget->setLayout(qpot1Layout);
    qpot1 = new QPot1();
    qpot1Layout->addWidget(qpot1);

    qpotmetWidget = new QWidget();
    mainStackedWidget->addWidget(qpotmetWidget);
    QHBoxLayout *qpotmetLayout = new QHBoxLayout();
    qpotmetWidget->setLayout(qpotmetLayout);
    qpotmet = new QPotMet();
    qpotmetLayout->addWidget(qpotmet);

    qcolWidget = new QWidget();
    mainStackedWidget->addWidget(qcolWidget);
    QHBoxLayout *qcolLayout = new QHBoxLayout();
    qcolWidget->setLayout(qcolLayout);
    qcol = new QCol();
    qcolLayout->addWidget(qcol);
}

void MainWindow::on_listView_pressed(QModelIndex)
{
    QModelIndex index = listView->currentIndex();
    QString text = index.data().toString();

    if (text == "七段数码管") {
        mainStackedWidget->setCurrentIndex(0);
    } else if (text == "Potentiometer") {
        mainStackedWidget->setCurrentIndex(1);
    } else if (text == "Potentiometer1") {
        mainStackedWidget->setCurrentIndex(2);
    } else if (text == "Potentiometer2") {
        mainStackedWidget->setCurrentIndex(3);
    }else if (text == "RGBA color selector") {
        mainStackedWidget->setCurrentIndex(4);
    }
}

MainWindow::~MainWindow()
{

}
