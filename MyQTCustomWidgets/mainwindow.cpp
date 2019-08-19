#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    q7seg1 = new Q7seg(this);
}

MainWindow::~MainWindow()
{

}
