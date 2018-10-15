#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSlider>
#include <QLabel>
#include <QPushButton>
#include "qcgaugewidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void Slider1Process(int);
    void Slider2Process(int);

private:
    QcGaugeWidget * mAttitudeGauge;
    QSlider *slider1,*slider2;
    QVBoxLayout *mainLayout;
    QHBoxLayout *h1Layout,*h2Layout;
    QLabel *textLabel;
    QPushButton *btn;

    QcNeedleItem * mAttitudeNeedle;
    QcAttitudeMeter *mAttMeter;
};

#endif // MAINWINDOW_H
