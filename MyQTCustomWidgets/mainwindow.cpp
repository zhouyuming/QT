#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *mainWidget = new QWidget();
    setCentralWidget(mainWidget);
    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainWidget->setLayout(mainLayout);
    q7seg1 = new Q7seg();
    q7seg1->setNumber(0);
    q7seg2 = new Q7seg();
    q7seg2->setNumber(1);
    q7seg3 = new Q7seg();
    q7seg3->setNumber(2);
    qpot = new QPot();
    mainLayout->addWidget(q7seg1);
    mainLayout->addWidget(q7seg2);
    mainLayout->addWidget(q7seg3);
    mainLayout->addWidget(qpot);
}

MainWindow::~MainWindow()
{

}
