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
    void sliderTest(int index);
private:
    QcGaugeWidget *mAirspeedGauge;
    QcNeedleItem *mAirspeedNeedle;
    QSlider *slider;
    QVBoxLayout *mainLayout;
};

#endif // MAINWINDOW_H
