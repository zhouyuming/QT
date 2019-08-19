#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>

#include "q7seg.h"
#include "qpot.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Q7seg *q7seg1;
    Q7seg *q7seg2;
    Q7seg *q7seg3;
    QPot *qpot;
};

#endif // MAINWINDOW_H
