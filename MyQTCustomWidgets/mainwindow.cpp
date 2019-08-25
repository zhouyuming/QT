#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(1200,800);
    QWidget *mainWidget = new QWidget();
    setCentralWidget(mainWidget);
    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainWidget->setLayout(mainLayout);

    listViewLayout = new QHBoxLayout();
    mainLayout->addLayout(listViewLayout, 1);

    mainStackedWidget = new QStackedWidget();
    mainLayout->addWidget(mainStackedWidget, 4);

    initListView();
    initQ7seg();
    initQPot();
    initQPot1();
    initQCol();
    initQPower();
    initQFreq();
    initQProg();
    initQPush();
    initQSlide();
    initQBattery();
    initQBarRuler();
    initQCurveChart();
    initPictureFlow();
    initQVCursor();
    initQVUMeter();
    initQLock();
}

void MainWindow::initListView()
{
    listView = new NavListView(NULL);

    QStringList listItem;
    //listItem.append("主界面||0|游龙");

    listItem.append("显示控件||0|");
    listItem.append("七段数码管|显示控件||");
    listItem.append("Spectrum analyzer|显示控件||");
    listItem.append("Progress bar|显示控件||");
    listItem.append("电子显示屏|显示控件||");
    listItem.append("电池电量显示|显示控件||");
    listItem.append("柱状标尺控件|显示控件||");
    listItem.append("曲线图|显示控件||");
    listItem.append("图片浏览器|显示控件||");
    listItem.append("VUMeter|显示控件||");

    listItem.append("控制控件||0|");
    listItem.append("Potentiometer|控制控件||");
    listItem.append("Potentiometer1|控制控件||");
    listItem.append("RGBA color selector|控制控件||");
    listItem.append("Power button|控制控件||");
    listItem.append("Alternative Push Button|控制控件||");
    listItem.append("Vertical Cursor|控制控件||");
    listItem.append("电子锁|控制控件||");

    listItem.append("信息管理||0|");
    listItem.append("学生管理|信息管理|0|");
    listItem.append("教师管理|信息管理|0|");
    listItem.append("成绩管理|信息管理|0|");

    listItem.append("帮助文档||1|");

    listView->setData(listItem);

    connect(listView, SIGNAL(pressed(QModelIndex)), this, SLOT(on_listView_pressed(QModelIndex)));

    listViewLayout->addWidget(listView);
}

void MainWindow::initQ7seg(void)
{
    QWidget *q7segWidget = new QWidget();
    mainStackedWidget->addWidget(q7segWidget);
    QHBoxLayout *q7segLayout = new QHBoxLayout();
    QVBoxLayout *q7segLayout1 = new QVBoxLayout();
    q7segWidget->setLayout(q7segLayout1);

    Q7seg *q7seg1 = new Q7seg();
    q7seg1->setNumber(0);
    Q7seg *q7seg2 = new Q7seg();
    q7seg2->setNumber(1);
    q7seg2->setColor(Q7seg::Green);
    Q7seg *q7seg3 = new Q7seg();
    q7seg3->setNumber(2);
    q7seg3->setColor(Q7seg::Yellow);
    Q7seg *q7seg4 = new Q7seg();
    q7seg4->setNumber(3);
    q7segLayout->addSpacing(160);
    q7segLayout->addWidget(q7seg1);
    q7segLayout->addWidget(q7seg2);
    q7segLayout->addWidget(q7seg3);
    q7segLayout->addWidget(q7seg4);
    q7segLayout->addSpacing(160);

    q7segLayout1->addSpacing(180);
    q7segLayout1->addLayout(q7segLayout);
    q7segLayout1->addSpacing(180);
}

void MainWindow::initQPot(void)
{
    QWidget *qpotWidget = new QWidget();
    mainStackedWidget->addWidget(qpotWidget);
    QHBoxLayout *qpotLayout = new QHBoxLayout();
    QVBoxLayout *qpotLayout1 = new QVBoxLayout();
    qpotWidget->setLayout(qpotLayout1);
    QPot *qpot = new QPot();
    QPotMet *qpotmet = new QPotMet();
    qpotLayout->addWidget(qpot);
    qpotLayout->addWidget(qpotmet);
    qpotLayout1->addSpacing(100);
    qpotLayout1->addLayout(qpotLayout);
    qpotLayout1->addSpacing(100);
}

void MainWindow::initQPot1(void)
{
    QWidget *qpot1Widget = new QWidget();
    mainStackedWidget->addWidget(qpot1Widget);
    QHBoxLayout *qpot1Layout = new QHBoxLayout();
    QVBoxLayout *qpot1Layout1 = new QVBoxLayout();
    qpot1Widget->setLayout(qpot1Layout1);
    QPot1 *qpot1 = new QPot1();
    qpot1Layout->addSpacing(180);
    qpot1Layout->addWidget(qpot1);
    qpot1Layout->addSpacing(180);

    qpot1Layout1->addSpacing(100);
    qpot1Layout1->addLayout(qpot1Layout);
    qpot1Layout1->addSpacing(100);
}

void MainWindow::initQCol(void)
{
    QWidget *qcolWidget = new QWidget();
    mainStackedWidget->addWidget(qcolWidget);
    QHBoxLayout *qcolLayout = new QHBoxLayout();
    QVBoxLayout *qcolLayout1 = new QVBoxLayout();
    qcolWidget->setLayout(qcolLayout1);
    QCol *qcol = new QCol();
    qcolLayout->addSpacing(100);
    qcolLayout->addWidget(qcol);
    qcolLayout->addSpacing(100);

    qcolLayout1->addSpacing(100);
    qcolLayout1->addLayout(qcolLayout);
    qcolLayout1->addSpacing(100);
}

void MainWindow::initQPower(void)
{
    QWidget *qpowerWidget = new QWidget();
    mainStackedWidget->addWidget(qpowerWidget);
    QHBoxLayout *qpowerLayout = new QHBoxLayout();
    QVBoxLayout *qpowerLayout1 = new QVBoxLayout();
    qpowerWidget->setLayout(qpowerLayout1);
    QPower *qpower = new QPower();

    qpowerLayout->addSpacing(200);
    qpowerLayout->addWidget(qpower);
    qpowerLayout->addSpacing(200);

    qpowerLayout1->addSpacing(200);
    qpowerLayout1->addLayout(qpowerLayout);
    qpowerLayout1->addSpacing(200);
}

void MainWindow::initQFreq(void)
{
    QWidget *qfreqWidget = new QWidget();
    mainStackedWidget->addWidget(qfreqWidget);
    QHBoxLayout *qfreqLayout = new QHBoxLayout();
    QVBoxLayout *qfreqLayout1 = new QVBoxLayout();
    qfreqWidget->setLayout(qfreqLayout1);
    QFreq *qfreq = new QFreq();
    qfreqLayout->addSpacing(100);
    qfreqLayout->addWidget(qfreq);
    qfreqLayout->addSpacing(100);

    qfreqLayout1->addSpacing(100);
    qfreqLayout1->addLayout(qfreqLayout);
    qfreqLayout1->addSpacing(100);
}

void MainWindow::initQProg(void)
{
    QWidget *qprogWidget = new QWidget();
    mainStackedWidget->addWidget(qprogWidget);
    QVBoxLayout *qprogLayout = new QVBoxLayout();
    QHBoxLayout *qprogLayout1 = new QHBoxLayout();
    qprogWidget->setLayout(qprogLayout1);
    QProg *qprog = new QProg();
    qprog->setValue(10);
    QProg *qprog1 = new QProg();
    qprog1->setBarColor(Qt::red);
    qprog1->setValue(20);
    QProg *qprog2 = new QProg();
    qprog2->setBarColor(Qt::yellow);
    qprog2->setValue(30);
    qprogLayout->addSpacing(150);
    qprogLayout->addWidget(qprog);
    qprogLayout->addWidget(qprog1);
    qprogLayout->addWidget(qprog2);
    qprogLayout->addSpacing(100);

    qprogLayout1->addSpacing(150);
    qprogLayout1->addLayout(qprogLayout);
    qprogLayout1->addSpacing(100);
}

void MainWindow::initQPush(void)
{
    QWidget *qpushWidget = new QWidget();
    mainStackedWidget->addWidget(qpushWidget);

    QVBoxLayout *qpushLayout = new QVBoxLayout();
    QVBoxLayout *qpushLayout1 = new QVBoxLayout();
    QHBoxLayout *qpushLayout2 = new QHBoxLayout();
    qpushWidget->setLayout(qpushLayout2);

    QPush *qpush = new QPush();
    qpush->setColorButton(Qt::red);
    QPush *qpush1 = new QPush();
    qpush1->setColorButton(Qt::blue);
    QPush *qpush2 = new QPush();
    qpush2->setColorButton(Qt::green);
    qpushLayout->addWidget(qpush);
    qpushLayout->addWidget(qpush1);
    qpushLayout->addWidget(qpush2);

    QPush1 *qpush1_0 = new QPush1();
    qpush1_0->setColorButton(Qt::red);
    QPush1 *qpush1_1 = new QPush1();
    qpush1_1->setColorButton(Qt::blue);
    QPush1 *qpush1_2 = new QPush1();
    qpush1_2->setColorButton(Qt::green);
    qpushLayout1->addWidget(qpush1_0);
    qpushLayout1->addWidget(qpush1_1);
    qpushLayout1->addWidget(qpush1_2);

    qpushLayout2->addLayout(qpushLayout);
    qpushLayout2->addLayout(qpushLayout1);
}

void MainWindow::initQSlide(void)
{
    QWidget *qslideWidget = new QWidget();
    mainStackedWidget->addWidget(qslideWidget);

    QVBoxLayout *qslideLayout = new QVBoxLayout();
    qslideWidget->setLayout(qslideLayout);

    QSlide *qslide = new QSlide();
    qslide->setText("Sliding text..");
    qslide->setTimer(200);
    qslide->startTmr(true);
    QSlide *qslide1 = new QSlide();
    qslide1->setText("Flashing text..");
    qslide1->setColorBg(Qt::yellow);
    qslide1->setColorTx(Qt::black);
    qslide1->setEffect(QSlide::intermittent);
    qslide1->setTimer(500);
    qslide1->startTmr(true);
    QSlide *qslide2 = new QSlide();
    qslide2->setText("Static text..");
    qslide2->setColorBg(Qt::red);
    qslide2->setColorTx(Qt::yellow);
    qslideLayout->addSpacing(200);
    qslideLayout->addWidget(qslide);
    qslideLayout->addWidget(qslide1);
    qslideLayout->addWidget(qslide2);
    qslideLayout->addSpacing(200);
}

void MainWindow::initQBattery(void)
{
    QWidget *qbatteryWidget = new QWidget();
    mainStackedWidget->addWidget(qbatteryWidget);

    QHBoxLayout *qbatteryLayout = new QHBoxLayout();
    QVBoxLayout *qbatteryLayout1 = new QVBoxLayout();
    qbatteryWidget->setLayout(qbatteryLayout1);

    QBattery *qbattery = new QBattery();
    qbattery->setValue(50);
    qbatteryLayout->addWidget(qbattery);

    qbatteryLayout1->addSpacing(100);
    qbatteryLayout1->addLayout(qbatteryLayout);
    qbatteryLayout1->addSpacing(100);
}

void MainWindow::initQBarRuler(void)
{
    QWidget *qbarrulerWidget = new QWidget();
    mainStackedWidget->addWidget(qbarrulerWidget);

    QHBoxLayout *qbarrulerLayout = new QHBoxLayout();
    QVBoxLayout *qbarrulerLayout1 = new QVBoxLayout();
    qbarrulerWidget->setLayout(qbarrulerLayout1);

    QBarRuler *qbarruler = new QBarRuler();
    qbarruler->setValue(50);

    QBarRuler *qbarruler1 = new QBarRuler();
    qbarruler1->setValue(60);
    qbarruler1->setBarColor(Qt::red);

    QBarRuler *qbarruler2 = new QBarRuler();
    qbarruler2->setValue(70);
    qbarruler2->setBarColor(Qt::green);

    qbarrulerLayout->addSpacing(200);
    qbarrulerLayout->addWidget(qbarruler);
    qbarrulerLayout->addWidget(qbarruler1);
    qbarrulerLayout->addWidget(qbarruler2);
    qbarrulerLayout->addSpacing(200);

    qbarrulerLayout1->addSpacing(100);
    qbarrulerLayout1->addLayout(qbarrulerLayout);
    qbarrulerLayout1->addSpacing(100);
}

void MainWindow::initQCurveChart(void)
{
    QWidget *qcurvechartWidget = new QWidget();
    mainStackedWidget->addWidget(qcurvechartWidget);

    QVBoxLayout *qcurvechartLayout = new QVBoxLayout();
    //QVBoxLayout *qbarrulerLayout1 = new QVBoxLayout();
    qcurvechartWidget->setLayout(qcurvechartLayout);

    QCurveChart *qcurvechart = new QCurveChart();
    QCurveChart *qcurvechart1 = new QCurveChart();
    qcurvechartLayout->addWidget(qcurvechart);
    qcurvechartLayout->addWidget(qcurvechart1);
}

void MainWindow::initPictureFlow(void)
{
    QWidget *pictureflowWidget = new QWidget();
    mainStackedWidget->addWidget(pictureflowWidget);

    QVBoxLayout *pictureflowLayout = new QVBoxLayout();
    pictureflowWidget->setLayout(pictureflowLayout);

    PictureFlow *pictureflow = new PictureFlow();
    pictureflow->addSlide(QPixmap("C:\\Users\\Administrator\\Desktop\\20171208140400726.png"));
    pictureflow->addSlide(QPixmap("C:\\Users\\Administrator\\Desktop\\20171208140400726.png"));
    pictureflow->addSlide(QPixmap("C:\\Users\\Administrator\\Desktop\\20171208140400726.png"));
    pictureflowLayout->addWidget(pictureflow);

}

void MainWindow::initQVCursor(void)
{
    QWidget *qvcursorWidget = new QWidget();
    mainStackedWidget->addWidget(qvcursorWidget);

    QHBoxLayout *qvcursorLayout = new QHBoxLayout();
    qvcursorWidget->setLayout(qvcursorLayout);

    QVCursor *qvcursor = new QVCursor();
    qvcursor->setColorBg(Qt::red);
    QVCursor *qvcursor1 = new QVCursor();
    qvcursor1->setColorBg(Qt::blue);
    QVCursor *qvcursor2 = new QVCursor();
    qvcursor2->setColorBg(Qt::green);
    qvcursorLayout->addSpacing(200);
    qvcursorLayout->addWidget(qvcursor);
    qvcursorLayout->addWidget(qvcursor1);
    qvcursorLayout->addWidget(qvcursor2);
    qvcursorLayout->addSpacing(200);
}

void MainWindow::initQVUMeter(void)
{
    QWidget *qvumeterWidget = new QWidget();
    mainStackedWidget->addWidget(qvumeterWidget);

    QHBoxLayout *qvumeterLayout = new QHBoxLayout();
    qvumeterWidget->setLayout(qvumeterLayout);

    QVUMeter *qvumeter = new QVUMeter();
    qvumeter->setColorBg(Qt::red);
    QVUMeter *qvumeter1 = new QVUMeter();
    qvumeter1->setColorBg(Qt::blue);
    QVUMeter *qvumeter2 = new QVUMeter();
    qvumeter2->setColorBg(Qt::green);
    qvumeterLayout->addSpacing(200);
    qvumeterLayout->addWidget(qvumeter);
    qvumeterLayout->addWidget(qvumeter1);
    qvumeterLayout->addWidget(qvumeter2);
    qvumeterLayout->addSpacing(200);
}

void MainWindow::initQLock(void)
{
    QWidget *qlockWidget = new QWidget();
    mainStackedWidget->addWidget(qlockWidget);

    QHBoxLayout *qlockLayout = new QHBoxLayout();
    qlockWidget->setLayout(qlockLayout);

    QLock *qlock = new QLock();
    qlockLayout->addWidget(qlock);
}

void MainWindow::on_listView_pressed(QModelIndex)
{
    QModelIndex index = listView->currentIndex();
    QString text = index.data().toString();

    if (text == "七段数码管") {
        mainStackedWidget->setCurrentIndex(0);
    } else if (text == "Potentiometer") {
        mainStackedWidget->setCurrentIndex(1);
    } else if (text == "Potentiometer1") {
        mainStackedWidget->setCurrentIndex(2);
    } else if (text == "RGBA color selector") {
        mainStackedWidget->setCurrentIndex(3);
    }else if (text == "Power button") {
        mainStackedWidget->setCurrentIndex(4);
    }else if (text == "Spectrum analyzer") {
        mainStackedWidget->setCurrentIndex(5);
    }else if (text == "Progress bar") {
        mainStackedWidget->setCurrentIndex(6);
    }else if (text == "Alternative Push Button") {
        mainStackedWidget->setCurrentIndex(7);
    }else if (text == "电子显示屏") {
        mainStackedWidget->setCurrentIndex(8);
    }else if (text == "电池电量显示") {
        mainStackedWidget->setCurrentIndex(9);
    }else if (text == "柱状标尺控件") {
        mainStackedWidget->setCurrentIndex(10);
    }else if (text == "曲线图") {
        mainStackedWidget->setCurrentIndex(11);
    }else if (text == "图片浏览器") {
        mainStackedWidget->setCurrentIndex(12);
    }else if (text == "Vertical Cursor") {
        mainStackedWidget->setCurrentIndex(13);
    }else if (text == "VUMeter") {
        mainStackedWidget->setCurrentIndex(14);
    }else if (text == "电子锁") {
        mainStackedWidget->setCurrentIndex(15);
    }
}

MainWindow::~MainWindow()
{

}
