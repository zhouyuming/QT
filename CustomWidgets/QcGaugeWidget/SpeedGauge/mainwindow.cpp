#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget();
    setCentralWidget(widget);
    mainLayout = new QVBoxLayout();
    widget->setLayout(mainLayout);

    mSpeedGauge = new QcGaugeWidget;
    mainLayout->addWidget(mSpeedGauge);
    mSpeedGauge->addBackground(99);
    QcBackgroundItem *bkg1 = mSpeedGauge->addBackground(92);
    bkg1->clearrColors();
    bkg1->addColor(0.1,Qt::black);
    bkg1->addColor(1.0,Qt::white);

    QcBackgroundItem *bkg2 = mSpeedGauge->addBackground(88);
    bkg2->clearrColors();
    bkg2->addColor(0.1,Qt::gray);
    bkg2->addColor(1.0,Qt::darkGray);

    mSpeedGauge->addArc(55);
    mSpeedGauge->addDegrees(65)->setValueRange(0,80);
    mSpeedGauge->addColorBand(50);

    mSpeedGauge->addValues(80)->setValueRange(0,80);

    mSpeedGauge->addLabel(70)->setText("Km/h");
    QcLabelItem *lab = mSpeedGauge->addLabel(40);
    lab->setText("0");
    mSpeedNeedle = mSpeedGauge->addNeedle(60);
    mSpeedNeedle->setLabel(lab);
    mSpeedNeedle->setColor(Qt::white);
    mSpeedNeedle->setValueRange(0,80);
    mSpeedGauge->addBackground(7);
    mSpeedGauge->addGlass(88);

    slider = new QSlider();
    slider->setMinimum(0);
    slider->setMaximum(80);
    connect(slider,SIGNAL(valueChanged(int)),this,SLOT(sliderProcess(int)));
    slider->setOrientation(Qt::Horizontal);
    mainLayout->addWidget(slider);
}

MainWindow::~MainWindow()
{

}

void MainWindow::sliderProcess(int value)
{
    mSpeedNeedle->setCurrentValue(value);
}
