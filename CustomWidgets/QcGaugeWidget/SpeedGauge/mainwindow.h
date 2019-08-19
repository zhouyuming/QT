#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QSlider>

#include "qcgaugewidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void sliderProcess(int);
private:
    QSlider *slider;
    QVBoxLayout *mainLayout;
    QcGaugeWidget * mSpeedGauge;
    QcNeedleItem *mSpeedNeedle;
};

#endif // MAINWINDOW_H
