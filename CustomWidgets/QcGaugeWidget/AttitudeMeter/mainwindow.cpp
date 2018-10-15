#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget();
    setCentralWidget(widget);
    mainLayout = new QVBoxLayout();
    widget->setLayout(mainLayout);

    mAttitudeGauge = new QcGaugeWidget;
    mAttitudeGauge->addBackground(99);
    QcBackgroundItem *bkg = mAttitudeGauge->addBackground(92);
    bkg->clearrColors();
    bkg->addColor(0.1,Qt::black);
    bkg->addColor(1.0,Qt::white);
    mAttMeter = mAttitudeGauge->addAttitudeMeter(88);

    mAttitudeNeedle = mAttitudeGauge->addNeedle(70);
    mAttitudeNeedle->setMinDegree(0);
    mAttitudeNeedle->setMaxDegree(180);
    mAttitudeNeedle->setValueRange(0,180);
    mAttitudeNeedle->setCurrentValue(90);
    mAttitudeNeedle->setColor(Qt::white);
    mAttitudeNeedle->setNeedle(QcNeedleItem::AttitudeMeterNeedle);
    mAttitudeGauge->addGlass(80);

    h1Layout = new QHBoxLayout();
    mainLayout->addLayout(h1Layout);
    slider1 = new QSlider();
    connect(slider1,SIGNAL(valueChanged(int)),this,SLOT(Slider2Process(int)));
    h1Layout->addWidget(slider1);
    h1Layout->addWidget(mAttitudeGauge);

    h2Layout = new QHBoxLayout();
    btn = new QPushButton("test");
    mainLayout->addLayout(h2Layout);
    textLabel = new QLabel();
    slider2 = new QSlider();
    slider2->setMinimum(-100);
    slider2->setMaximum(100);
    connect(slider2,SIGNAL(valueChanged(int)),this,SLOT(Slider1Process(int)));
    slider2->setOrientation(Qt::Horizontal);
    //h2Layout->addWidget(btn);
    h2Layout->addWidget(textLabel);
    h2Layout->addWidget(slider2);
}

MainWindow::~MainWindow()
{

}

void MainWindow::Slider1Process(int value)
{
    mAttitudeNeedle->setCurrentValue(90-value);
    mAttMeter->setCurrentRoll(value);
}

void MainWindow::Slider2Process(int value)
{
    ui->label->setText(QString::number(value));
    mAttMeter->setCurrentPitch(value);
}
