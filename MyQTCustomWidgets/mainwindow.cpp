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
    initLightButton();
    initLedNumber();
    initImageCalendar();
    initFlatUI();
    initNavButton();
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
    listItem.append("高亮发光按钮控件|显示控件||");
    listItem.append("LED数字显示控件|显示控件||");
    listItem.append("图像背景日历|显示控件||");

    listItem.append("控制控件||0|");
    listItem.append("Potentiometer|控制控件||");
    listItem.append("Potentiometer1|控制控件||");
    listItem.append("RGBA color selector|控制控件||");
    listItem.append("Power button|控制控件||");
    listItem.append("Alternative Push Button|控制控件||");
    listItem.append("Vertical Cursor|控制控件||");
    listItem.append("电子锁|控制控件||");

    listItem.append("界面风格||0|");
    listItem.append("扁平化界面|界面风格|0|");
    listItem.append("导航按钮|界面风格|0|");
    listItem.append("成绩管理|界面风格|0|");

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

void MainWindow::initLightButton(void)
{
    QWidget *lightbuttonWidget = new QWidget();
    mainStackedWidget->addWidget(lightbuttonWidget);

    QHBoxLayout *lightbuttonLayout = new QHBoxLayout();
    lightbuttonWidget->setLayout(lightbuttonLayout);

    LightButton *lightbutton = new LightButton();
    lightbuttonLayout->addWidget(lightbutton);
}

void MainWindow::initLedNumber(void)
{
    QWidget *lednumberWidget = new QWidget();
    mainStackedWidget->addWidget(lednumberWidget);

    QHBoxLayout *lednumberLayout = new QHBoxLayout();
    lednumberWidget->setLayout(lednumberLayout);

    LedNumber *lednumber = new LedNumber();
    lednumberLayout->addWidget(lednumber);
}

void MainWindow::initImageCalendar(void)
{
    QWidget *imagecalendarWidget = new QWidget();
    mainStackedWidget->addWidget(imagecalendarWidget);

    QHBoxLayout *imagecalendarLayout = new QHBoxLayout();
    imagecalendarWidget->setLayout(imagecalendarLayout);

    ImageCalendar *imagecalendar = new ImageCalendar();
    imagecalendar->setCalendarStyle(ImageCalendar::CalendarStyle_Red);
    imagecalendarLayout->addWidget(imagecalendar);
}

void MainWindow::initFlatUI(void)
{
    QWidget *flatuiWidget = new QWidget();
    mainStackedWidget->addWidget(flatuiWidget);

    QVBoxLayout *flatuiLayout = new QVBoxLayout();
    QHBoxLayout *flatuiLayout1 = new QHBoxLayout();
    QHBoxLayout *flatuiLayout2 = new QHBoxLayout();
    QHBoxLayout *flatuiLayout3 = new QHBoxLayout();
    QHBoxLayout *flatuiLayout4 = new QHBoxLayout();
    QHBoxLayout *flatuiLayout5 = new QHBoxLayout();
    QHBoxLayout *flatuiLayout6 = new QHBoxLayout();
    QVBoxLayout *flatuiLayout7 = new QVBoxLayout();
    flatuiWidget->setLayout(flatuiLayout7);

    QPushButton *btn1 = new QPushButton();
    btn1->setText("测试按钮");
    QPushButton *btn2 = new QPushButton();
    btn2->setText("测试按钮");
    QPushButton *btn3 = new QPushButton();
    btn3->setText("测试按钮");
    QPushButton *btn4 = new QPushButton();
    btn4->setText("测试按钮");
    FlatUI::Instance()->setPushButtonQss(btn1);
    FlatUI::Instance()->setPushButtonQss(btn2, 5, 8, "#1ABC9C", "#E6F8F5", "#2EE1C1", "#FFFFFF", "#16A086", "#A7EEE6");
    FlatUI::Instance()->setPushButtonQss(btn3, 5, 8, "#3498DB", "#FFFFFF", "#5DACE4", "#E5FEFF", "#2483C7", "#A0DAFB");
    FlatUI::Instance()->setPushButtonQss(btn4, 5, 8, "#E74C3C", "#FFFFFF", "#EC7064", "#FFF5E7", "#DC2D1A", "#F5A996");
    flatuiLayout1->addWidget(btn1);
    flatuiLayout1->addWidget(btn2);
    flatuiLayout1->addWidget(btn3);
    flatuiLayout1->addWidget(btn4);

    QLineEdit *lineedit1 = new QLineEdit();
    QLineEdit *lineedit2 = new QLineEdit();
    QLineEdit *lineedit3 = new QLineEdit();
    QLineEdit *lineedit4 = new QLineEdit();
    FlatUI::Instance()->setLineEditQss(lineedit1);
    FlatUI::Instance()->setLineEditQss(lineedit2, 5, 2, "#DCE4EC", "#1ABC9C");
    FlatUI::Instance()->setLineEditQss(lineedit3, 3, 1, "#DCE4EC", "#3498DB");
    FlatUI::Instance()->setLineEditQss(lineedit4, 3, 1, "#DCE4EC", "#E74C3C");
    flatuiLayout2->addWidget(lineedit1);
    flatuiLayout2->addWidget(lineedit2);
    flatuiLayout2->addWidget(lineedit3);
    flatuiLayout2->addWidget(lineedit4);

    QProgressBar *bar1 = new QProgressBar();
    QProgressBar *bar2 = new QProgressBar();
    FlatUI::Instance()->setProgressBarQss(bar1);
    FlatUI::Instance()->setProgressBarQss(bar2, 8, 5, 9, "#E8EDF2", "#1ABC9C");
    flatuiLayout3->addWidget(bar1);
    flatuiLayout3->addWidget(bar2);

    QSlider *slider1 = new QSlider();
    slider1->setOrientation(Qt::Horizontal);
    QSlider *slider2 = new QSlider();
    slider2->setOrientation(Qt::Horizontal);
    QSlider *slider3= new QSlider();
    FlatUI::Instance()->setSliderQss(slider1);
    FlatUI::Instance()->setSliderQss(slider2, 10, "#E8EDF2", "#E74C3C", "#E74C3C");
    FlatUI::Instance()->setSliderQss(slider3, 10, "#E8EDF2", "#34495E", "#34495E");
    flatuiLayout5->addWidget(slider1);
    flatuiLayout5->addWidget(slider2);

    QScrollBar *scrollbar = new QScrollBar();
    QScrollBar *scrollbar1 = new QScrollBar();
    scrollbar->setOrientation(Qt::Horizontal);
    FlatUI::Instance()->setScrollBarQss(scrollbar);
    FlatUI::Instance()->setScrollBarQss(scrollbar1, 8, 120, 20, "#606060", "#34495E", "#1ABC9C", "#E74C3C");

    QRadioButton *radiobtn1 = new QRadioButton();
    radiobtn1->setText("语文");
    QRadioButton *radiobtn2 = new QRadioButton();
    radiobtn2->setText("英语");
    QRadioButton *radiobtn3 = new QRadioButton();
    radiobtn3->setText("数学");
    QRadioButton *radiobtn4 = new QRadioButton();
    radiobtn4->setText("历史");
    FlatUI::Instance()->setRadioButtonQss(radiobtn1);
    FlatUI::Instance()->setRadioButtonQss(radiobtn2, 8, "#D7DBDE", "#1ABC9C");
    FlatUI::Instance()->setRadioButtonQss(radiobtn3, 8, "#D7DBDE", "#3498DB");
    FlatUI::Instance()->setRadioButtonQss(radiobtn4, 8, "#D7DBDE", "#E74C3C");
    flatuiLayout4->addWidget(radiobtn1);
    flatuiLayout4->addWidget(radiobtn2);
    flatuiLayout4->addWidget(radiobtn3);
    flatuiLayout4->addWidget(radiobtn4);

    flatuiLayout->addLayout(flatuiLayout1);
    flatuiLayout->addLayout(flatuiLayout2);
    flatuiLayout->addLayout(flatuiLayout3);
    flatuiLayout->addLayout(flatuiLayout5);
    flatuiLayout->addWidget(scrollbar);
    flatuiLayout->addLayout(flatuiLayout4);

    flatuiLayout6->addLayout(flatuiLayout);
    flatuiLayout6->addWidget(slider3);
    flatuiLayout6->addWidget(scrollbar1);

    QTableWidget *tableWidget = new QTableWidget();

    //int width = qApp->desktop()->availableGeometry().width() - 120;
    int width = flatuiWidget->width() - 120;
    tableWidget->setColumnCount(5);
    tableWidget->setColumnWidth(0, width * 0.06);
    tableWidget->setColumnWidth(1, width * 0.10);
    tableWidget->setColumnWidth(2, width * 0.06);
    tableWidget->setColumnWidth(3, width * 0.10);
    tableWidget->setColumnWidth(4, width * 0.20);
    tableWidget->verticalHeader()->setDefaultSectionSize(25);

    QStringList headText;
    headText << "设备编号" << "设备名称" << "设备地址" << "告警内容" << "告警时间";
    tableWidget->setHorizontalHeaderLabels(headText);
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    tableWidget->setAlternatingRowColors(true);
    tableWidget->verticalHeader()->setVisible(false);
    tableWidget->horizontalHeader()->setStretchLastSection(true);

    //设置行高
    tableWidget->setRowCount(300);

    for (int i = 0; i < 300; i++) {
        tableWidget->setRowHeight(i, 24);

        QTableWidgetItem *itemDeviceID = new QTableWidgetItem(QString::number(i + 1));
        QTableWidgetItem *itemDeviceName = new QTableWidgetItem(QString("测试设备%1").arg(i + 1));
        QTableWidgetItem *itemDeviceAddr = new QTableWidgetItem(QString::number(i + 1));
        QTableWidgetItem *itemContent = new QTableWidgetItem("防区告警");
        QTableWidgetItem *itemTime = new QTableWidgetItem(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

        tableWidget->setItem(i, 0, itemDeviceID);
        tableWidget->setItem(i, 1, itemDeviceName);
        tableWidget->setItem(i, 2, itemDeviceAddr);
        tableWidget->setItem(i, 3, itemContent);
        tableWidget->setItem(i, 4, itemTime);
    }


    flatuiLayout7->addLayout(flatuiLayout6);
    flatuiLayout7->addWidget(tableWidget);
}

void MainWindow::initNavButton(void)
{
    QWidget *navbuttonWidget = new QWidget();
    mainStackedWidget->addWidget(navbuttonWidget);

    QVBoxLayout *navbuttonLayout = new QVBoxLayout();
    QVBoxLayout *navbuttonLayout1 = new QVBoxLayout();
    QVBoxLayout *navbuttonLayout2 = new QVBoxLayout();
    QVBoxLayout *navbuttonLayout3 = new QVBoxLayout();
    QVBoxLayout *navbuttonLayout4 = new QVBoxLayout();
    QHBoxLayout *navbuttonLayout5 = new QHBoxLayout();
    QHBoxLayout *navbuttonLayout6 = new QHBoxLayout();
    QHBoxLayout *navbuttonLayout7 = new QHBoxLayout();
    QHBoxLayout *navbuttonLayout8 = new QHBoxLayout();
    navbuttonWidget->setLayout(navbuttonLayout);

    //从图形字体获得图片,也可以从资源文件或者路径文件获取
    QChar icon = 0xf061;
    QPixmap iconNormal = IconHelper::Instance()->getPixmap(QColor(100, 100, 100).name(), icon);
    QPixmap iconHover = IconHelper::Instance()->getPixmap(QColor(255, 255, 255).name(), icon);
    QPixmap iconCheck = IconHelper::Instance()->getPixmap(QColor(255, 255, 255).name(), icon);

    QList<NavButton *> btns1;
    QList<NavButton *> btns2;
    QList<NavButton *> btns3;
    QList<NavButton *> btns4;
    QList<NavButton *> btns5;
    QList<NavButton *> btns6;
    QList<NavButton *> btns7;

    NavButton *navButton11 = new NavButton();
    navButton11->setText("学生管理");
    NavButton *navButton12 = new NavButton();
    navButton12->setText("教师管理");
    NavButton *navButton13 = new NavButton();
    navButton13->setText("成绩管理");
    NavButton *navButton14 = new NavButton();
    navButton14->setText("记录查询");

    NavButton *navButton21 = new NavButton();
    navButton21->setText("访客登记");
    NavButton *navButton22 = new NavButton();
    navButton22->setText("记录查询");
    NavButton *navButton23 = new NavButton();
    navButton23->setText("系统设置");
    NavButton *navButton24 = new NavButton();
    navButton24->setText("系统重启");

    NavButton *navButton31 = new NavButton();
    navButton31->setText("学生管理");
    NavButton *navButton32 = new NavButton();
    navButton32->setText("教师管理");
    NavButton *navButton33 = new NavButton();
    navButton33->setText("成绩管理");
    NavButton *navButton34 = new NavButton();
    navButton34->setText("记录查询");

    NavButton *navButton41 = new NavButton();
    navButton41->setText("学生管理");
    NavButton *navButton42 = new NavButton();
    navButton42->setText("教师管理");
    NavButton *navButton43 = new NavButton();
    navButton43->setText("成绩管理");
    NavButton *navButton44 = new NavButton();
    navButton44->setText("记录查询");

    NavButton *navButton51 = new NavButton();
    navButton51->setText("首页");
    NavButton *navButton52 = new NavButton();
    navButton52->setText("论坛");
    NavButton *navButton53 = new NavButton();
    navButton53->setText("作品");
    NavButton *navButton54 = new NavButton();
    navButton54->setText("群组");
    NavButton *navButton55 = new NavButton();
    navButton55->setText("帮助");

    NavButton *navButton61 = new NavButton();
    navButton61->setText("首页");
    NavButton *navButton62 = new NavButton();
    navButton62->setText("论坛");
    NavButton *navButton63 = new NavButton();
    navButton63->setText("作品");
    NavButton *navButton64 = new NavButton();
    navButton64->setText("群组");
    NavButton *navButton65 = new NavButton();
    navButton65->setText("帮助");

    NavButton *navButton71 = new NavButton();
    navButton71->setText("首页");
    NavButton *navButton72 = new NavButton();
    navButton72->setText("论坛");
    NavButton *navButton73 = new NavButton();
    navButton73->setText("Qt下载");
    NavButton *navButton74 = new NavButton();
    navButton74->setText("作品展");
    NavButton *navButton75 = new NavButton();
    navButton75->setText("群组");
    NavButton *navButton76 = new NavButton();
    navButton76->setText("个人中心");

    btns1 << navButton11 << navButton12 << navButton13 << navButton14;
    for (int i = 0; i < btns1.count(); i++) {
        btns1.at(i)->setPaddingLeft(32);
        btns1.at(i)->setLineSpace(6);

        btns1.at(i)->setShowIcon(true);
        btns1.at(i)->setIconSpace(15);
        btns1.at(i)->setIconSize(QSize(10, 10));
        btns1.at(i)->setIconNormal(iconNormal);
        btns1.at(i)->setIconHover(iconHover);
        btns1.at(i)->setIconCheck(iconCheck);

        //connect(btns1.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick1()));

        navbuttonLayout1->addWidget(btns1.at(i));
    }

    QList<QChar> pixChar;
    pixChar << 0xf2ba << 0xf002 << 0xf013 << 0xf021 << 0xf0e0 << 0xf135;
    QColor normalBgColor = QColor("#2D9191");
    QColor hoverBgColor = QColor("#187294");
    QColor checkBgColor = QColor("#145C75");
    QColor normalTextColor = QColor("#FFFFFF");
    QColor hoverTextColor = QColor("#FFFFFF");
    QColor checkTextColor = QColor("#FFFFFF");

    btns2 << navButton21 << navButton22 << navButton23 << navButton24;
    for (int i = 0; i < btns2.count(); i++) {
        btns2.at(i)->setPaddingLeft(35);
        btns2.at(i)->setLineSpace(0);
        btns2.at(i)->setLineWidth(8);
        btns2.at(i)->setLineColor(QColor(255, 107, 107));
        btns2.at(i)->setShowTriangle(true);

        btns2.at(i)->setShowIcon(true);
        btns2.at(i)->setIconSpace(10);
        btns2.at(i)->setIconSize(QSize(22, 22));

        //分开设置图标
        QChar icon = pixChar.at(i);
        QPixmap iconNormal = IconHelper::Instance()->getPixmap(normalTextColor.name(), icon, 15, 30, 30);
        QPixmap iconHover = IconHelper::Instance()->getPixmap(hoverTextColor.name(), icon, 15, 30, 30);
        QPixmap iconCheck = IconHelper::Instance()->getPixmap(checkTextColor.name(), icon, 15, 30, 30);

        btns2.at(i)->setIconNormal(iconNormal);
        btns2.at(i)->setIconHover(iconHover);
        btns2.at(i)->setIconCheck(iconCheck);

        btns2.at(i)->setNormalBgColor(normalBgColor);
        btns2.at(i)->setHoverBgColor(hoverBgColor);
        btns2.at(i)->setCheckBgColor(checkBgColor);
        btns2.at(i)->setNormalTextColor(normalTextColor);
        btns2.at(i)->setHoverTextColor(hoverTextColor);
        btns2.at(i)->setCheckTextColor(checkTextColor);

        //connect(btns2.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick2()));
        navbuttonLayout2->addWidget(btns2.at(i));
    }

    normalBgColor = QColor("#292F38");
    hoverBgColor = QColor("#1D2025");
    checkBgColor = QColor("#1D2025");
    normalTextColor = QColor("#54626F");
    hoverTextColor = QColor("#FDFDFD");
    checkTextColor = QColor("#FDFDFD");

    btns3 << navButton31 << navButton32 << navButton33 << navButton34;
    for (int i = 0; i < btns3.count(); i++) {
        btns3.at(i)->setPaddingLeft(35);
        btns3.at(i)->setLineWidth(10);
        btns3.at(i)->setLineColor(QColor("#029FEA"));
        btns3.at(i)->setShowTriangle(true);
        btns3.at(i)->setTextAlign(NavButton::TextAlign_Left);
        btns3.at(i)->setTrianglePosition(NavButton::TrianglePosition_Left);
        btns3.at(i)->setLinePosition(NavButton::LinePosition_Right);

        btns3.at(i)->setShowIcon(true);
        btns3.at(i)->setIconSpace(10);
        btns3.at(i)->setIconSize(QSize(22, 22));

        //分开设置图标
        QChar icon = pixChar.at(i);
        QPixmap iconNormal = IconHelper::Instance()->getPixmap(normalTextColor.name(), icon, 15, 30, 30);
        QPixmap iconHover = IconHelper::Instance()->getPixmap(hoverTextColor.name(), icon, 15, 30, 30);
        QPixmap iconCheck = IconHelper::Instance()->getPixmap(checkTextColor.name(), icon, 15, 30, 30);

        btns3.at(i)->setIconNormal(iconNormal);
        btns3.at(i)->setIconHover(iconHover);
        btns3.at(i)->setIconCheck(iconCheck);

        btns3.at(i)->setNormalBgColor(normalBgColor);
        btns3.at(i)->setHoverBgColor(hoverBgColor);
        btns3.at(i)->setCheckBgColor(checkBgColor);
        btns3.at(i)->setNormalTextColor(normalTextColor);
        btns3.at(i)->setHoverTextColor(hoverTextColor);
        btns3.at(i)->setCheckTextColor(checkTextColor);

        //connect(btns3.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick3()));
        navbuttonLayout3->addWidget(btns3.at(i));
    }


    icon = 0xf105;
    iconNormal = IconHelper::Instance()->getPixmap(QColor(100, 100, 100).name(), icon, 12, 15, 15);
    iconHover = IconHelper::Instance()->getPixmap(QColor(255, 255, 255).name(), icon, 12, 15, 15);
    iconCheck = IconHelper::Instance()->getPixmap(QColor(255, 255, 255).name(), icon, 12, 15, 15);

    btns4 << navButton41 << navButton42 << navButton43 << navButton44;
    for (int i = 0; i < btns4.count(); i++) {
        btns4.at(i)->setLineSpace(10);
        btns4.at(i)->setLineWidth(10);
        btns4.at(i)->setPaddingRight(25);
        btns4.at(i)->setShowTriangle(true);
        btns4.at(i)->setTextAlign(NavButton::TextAlign_Right);
        btns4.at(i)->setTrianglePosition(NavButton::TrianglePosition_Left);
        btns4.at(i)->setLinePosition(NavButton::LinePosition_Right);

        btns4.at(i)->setShowIcon(true);
        btns4.at(i)->setIconSpace(25);
        btns4.at(i)->setIconSize(QSize(15, 15));
        btns4.at(i)->setIconNormal(iconNormal);
        btns4.at(i)->setIconHover(iconHover);
        btns4.at(i)->setIconCheck(iconCheck);

        //connect(btns4.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick4()));
        navbuttonLayout4->addWidget(btns4.at(i));
    }

    QFont font;
    font.setPixelSize(15);
    font.setBold(true);

    normalBgColor = QColor("#292929");
    hoverBgColor = QColor("#064077");
    checkBgColor = QColor("#10689A");
    normalTextColor = QColor("#FFFFFF");
    hoverTextColor = Qt::yellow;
    checkTextColor = QColor("#FFFFFF");

    btns5 << navButton51 << navButton52 << navButton53 << navButton54 << navButton55;
    for (int i = 0; i < btns5.count(); i++) {
        btns5.at(i)->setFont(font);
        btns5.at(i)->setPaddingLeft(20);
        btns5.at(i)->setShowLine(false);
        btns5.at(i)->setTextAlign(NavButton::TextAlign_Center);
        btns5.at(i)->setLinePosition(NavButton::LinePosition_Bottom);

        btns5.at(i)->setShowIcon(true);
        btns5.at(i)->setIconSpace(15);
        btns5.at(i)->setIconSize(QSize(22, 22));

        //分开设置图标
        QChar icon = pixChar.at(i);
        QPixmap iconNormal = IconHelper::Instance()->getPixmap(normalTextColor.name(), icon, 15, 30, 30);
        QPixmap iconHover = IconHelper::Instance()->getPixmap(hoverTextColor.name(), icon, 15, 30, 30);
        QPixmap iconCheck = IconHelper::Instance()->getPixmap(checkTextColor.name(), icon, 15, 30, 30);

        btns5.at(i)->setIconNormal(iconNormal);
        btns5.at(i)->setIconHover(iconHover);
        btns5.at(i)->setIconCheck(iconCheck);

        btns5.at(i)->setNormalBgColor(normalBgColor);
        btns5.at(i)->setHoverBgColor(hoverBgColor);
        btns5.at(i)->setCheckBgColor(checkBgColor);
        btns5.at(i)->setNormalTextColor(normalTextColor);
        btns5.at(i)->setHoverTextColor(hoverTextColor);
        btns5.at(i)->setCheckTextColor(checkTextColor);

        //connect(btns5.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick5()));
        navbuttonLayout5->addWidget(btns5.at(i));
    }

    navbuttonLayout6->addLayout(navbuttonLayout1);
    navbuttonLayout6->addLayout(navbuttonLayout2);
    navbuttonLayout6->addLayout(navbuttonLayout3);
    navbuttonLayout6->addLayout(navbuttonLayout4);

    normalBgColor = QColor("#E6393D");
    hoverBgColor = QColor("#EE0000");
    checkBgColor = QColor("#A40001");
    normalTextColor = QColor("#FFFFFF");
    hoverTextColor = QColor("#FFFFFF");
    checkTextColor = QColor("#FFFFFF");

    btns6 << navButton61 << navButton62 << navButton63 << navButton64 << navButton65;
    for (int i = 0; i < btns6.count(); i++) {
        btns6.at(i)->setFont(font);
        btns6.at(i)->setPaddingLeft(20);
        btns6.at(i)->setShowLine(false);
        btns6.at(i)->setTextAlign(NavButton::TextAlign_Center);
        btns6.at(i)->setLinePosition(NavButton::LinePosition_Bottom);

        btns6.at(i)->setShowIcon(true);
        btns6.at(i)->setIconSpace(15);
        btns6.at(i)->setIconSize(QSize(22, 22));

        //分开设置图标
        QChar icon = pixChar.at(i);
        QPixmap iconNormal = IconHelper::Instance()->getPixmap(normalTextColor.name(), icon, 15, 30, 30);
        QPixmap iconHover = IconHelper::Instance()->getPixmap(hoverTextColor.name(), icon, 15, 30, 30);
        QPixmap iconCheck = IconHelper::Instance()->getPixmap(checkTextColor.name(), icon, 15, 30, 30);

        btns6.at(i)->setIconNormal(iconNormal);
        btns6.at(i)->setIconHover(iconHover);
        btns6.at(i)->setIconCheck(iconCheck);

        btns6.at(i)->setNormalBgColor(normalBgColor);
        btns6.at(i)->setHoverBgColor(hoverBgColor);
        btns6.at(i)->setCheckBgColor(checkBgColor);
        btns6.at(i)->setNormalTextColor(normalTextColor);
        btns6.at(i)->setHoverTextColor(hoverTextColor);
        btns6.at(i)->setCheckTextColor(checkTextColor);

        //connect(btns6.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick6()));
        navbuttonLayout7->addWidget(btns6.at(i));
    }

    //设置背景色为画刷
    QLinearGradient normalBgBrush(0, 0, 0, navButton61->height());
    normalBgBrush.setColorAt(0.0, QColor("#3985BF"));
    normalBgBrush.setColorAt(0.5, QColor("#2972A9"));
    normalBgBrush.setColorAt(1.0, QColor("#1C6496"));

    QLinearGradient hoverBgBrush(0, 0, 0, navButton61->height());
    hoverBgBrush.setColorAt(0.0, QColor("#4897D1"));
    hoverBgBrush.setColorAt(0.5, QColor("#3283BC"));
    hoverBgBrush.setColorAt(1.0, QColor("#3088C3"));

    btns7 << navButton71 << navButton72 << navButton73 << navButton74 << navButton75 << navButton76;
    for (int i = 0; i < btns7.count(); i++) {
        btns7.at(i)->setFont(font);
        btns7.at(i)->setPaddingLeft(0);
        btns7.at(i)->setLineSpace(0);
        btns7.at(i)->setShowTriangle(true);
        btns7.at(i)->setTextAlign(NavButton::TextAlign_Center);
        btns7.at(i)->setTrianglePosition(NavButton::TrianglePosition_Bottom);
        btns7.at(i)->setLinePosition(NavButton::LinePosition_Top);

        btns7.at(i)->setNormalTextColor(normalTextColor);
        btns7.at(i)->setHoverTextColor(hoverTextColor);
        btns7.at(i)->setCheckTextColor(checkTextColor);

        btns7.at(i)->setNormalBgBrush(normalBgBrush);
        btns7.at(i)->setHoverBgBrush(hoverBgBrush);
        btns7.at(i)->setCheckBgBrush(hoverBgBrush);

        //connect(btns7.at(i), SIGNAL(clicked(bool)), this, SLOT(buttonClick7()));
        navbuttonLayout8->addWidget(btns7.at(i));
    }

    navbuttonLayout->addLayout(navbuttonLayout6);
    navbuttonLayout->addLayout(navbuttonLayout5);
    navbuttonLayout->addLayout(navbuttonLayout7);
    navbuttonLayout->addLayout(navbuttonLayout8);

    navButton11->setChecked(true);
    navButton23->setChecked(true);
    navButton31->setChecked(true);
    navButton44->setChecked(true);
    navButton53->setChecked(true);
    navButton61->setChecked(true);
    navButton75->setChecked(true);
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
    }else if (text == "高亮发光按钮控件") {
        mainStackedWidget->setCurrentIndex(16);
    }else if (text == "LED数字显示控件") {
        mainStackedWidget->setCurrentIndex(17);
    }else if (text == "图像背景日历") {
        mainStackedWidget->setCurrentIndex(18);
    }else if (text == "扁平化界面") {
        mainStackedWidget->setCurrentIndex(19);
    }else if (text == "导航按钮") {
        mainStackedWidget->setCurrentIndex(20);
    }
}

MainWindow::~MainWindow()
{

}
