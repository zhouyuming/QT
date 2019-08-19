#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *widget = new QWidget();
    setCentralWidget(widget);

    mainLayout = new QVBoxLayout();
    widget->setLayout(mainLayout);

    mAirspeedGauge = new QcGaugeWidget;
    mAirspeedGauge->addArc(55);
    mainLayout->addWidget(mAirspeedGauge);
    mAirspeedGauge->addDegrees(65)->setValueRange(0,100);
    QcColorBand *clrBand = mAirspeedGauge->addColorBand(50);
    clrBand->setValueRange(0,100);
    mAirspeedGauge->addValues(80)->setValueRange(0,100);
    mAirspeedGauge->addLabel(70)->setText("Km/h");
    QcLabelItem *lab = mAirspeedGauge->addLabel(40);
    lab->setText("0");
    mAirspeedNeedle = mAirspeedGauge->addNeedle(60);
    mAirspeedNeedle->setLabel(lab);
    mAirspeedNeedle->setColor(Qt::blue);
    mAirspeedNeedle->setValueRange(0,100);
    mAirspeedGauge->addBackground(7);

    slider = new QSlider();
    connect(slider,SIGNAL(valueChanged(int)),this,SLOT(sliderTest(int)));
    slider->setOrientation(Qt::Horizontal);
    slider->setMinimum(0);
    slider->setMaximum(100);
    mainLayout->addWidget(slider);
}

MainWindow::~MainWindow()
{

}

void MainWindow::sliderTest(int value)
{
     mAirspeedNeedle->setCurrentValue(value);
}
