#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget();
    setCentralWidget(widget);
    mainLayout = new QVBoxLayout();
    widget->setLayout(mainLayout);

    mCompassGauge = new QcGaugeWidget;
    mainLayout->addWidget(mCompassGauge);
    mCompassGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mCompassGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = mCompassGauge->addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::white);
    bkg2->addColor(1.0,Qt::black);

    QcLabelItem *w = mCompassGauge->addLabel(80);
    w->setText("W");
    w->setAngle(0);
    w->setColor(Qt::white);

    QcLabelItem *n = mCompassGauge->addLabel(80);
    n->setText("N");
    n->setAngle(90);
    n->setColor(Qt::white);

    QcLabelItem *e = mCompassGauge->addLabel(80);
    e->setText("E");
    e->setAngle(180);
    e->setColor(Qt::white);

    QcLabelItem *s = mCompassGauge->addLabel(80);
    s->setText("S");
    s->setAngle(270);
    s->setColor(Qt::white);

    QcDegreesItem *deg = mCompassGauge->addDegrees(70);
    deg->setStep(5);
    deg->setMaxDegree(270);
    deg->setMinDegree(-75);
    deg->setColor(Qt::white);

    mCompassNeedle = mCompassGauge->addNeedle(60);
    mCompassNeedle->setNeedle(QcNeedleItem::CompassNeedle);
    mCompassNeedle->setValueRange(0,360);
    mCompassNeedle->setMaxDegree(360);
    mCompassNeedle->setMinDegree(0);
    mCompassGauge->addBackground(7);
    mCompassGauge->addGlass(88);

    slider = new QSlider();
    slider->setMinimum(0);
    slider->setMaximum(360);
    connect(slider,SIGNAL(valueChanged(int)),this,SLOT(sliderProcess(int)));
    slider->setOrientation(Qt::Horizontal);
    mainLayout->addWidget(slider);
}

MainWindow::~MainWindow()
{

}

void MainWindow::sliderProcess(int value)
{
    mCompassNeedle->setCurrentValue(value);
}
