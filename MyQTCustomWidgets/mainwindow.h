#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "q7seg.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Q7seg *q7seg1;
};

#endif // MAINWINDOW_H
