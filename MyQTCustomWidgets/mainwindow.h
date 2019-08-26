#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QStackedWidget>
#include <QSpacerItem>
#include <QPushButton>
#include <QLineEdit>
#include <QProgressBar>
#include <QScrollBar>
#include <QRadioButton>
#include <QSlider>
#include <QTableWidget>
#include <QHeaderView>
#include <QGuiApplication>

#include "qdesktopwidget.h"

#include "q7seg.h"
#include "qpot.h"
#include "qpot1.h"
#include "qpotmet.h"
#include "qcol.h"
#include "qpower.h"
#include "qfreq.h"
#include "qprog.h"
#include "qpush.h"
#include "qpush1.h"
#include "qslide.h"
#include "qbattery.h"
#include "qbarruler.h"
#include "qcurvechart.h"
#include "pictureflow.h"
#include "qvcursor.h"
#include "qvumeter.h"
#include "qlock.h"
#include "lightbutton.h"
#include "lednumber.h"
#include "imagecalendar.h"
#include "flatui.h"
#include "navbutton.h"
#include "iconhelper.h"
#include "navlistview.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_listView_pressed(QModelIndex);

private:
    void initListView(void);
    void initQ7seg(void);
    void initQPot(void);
    void initQPot1(void);
    void initQCol(void);
    void initQPower(void);
    void initQFreq(void);
    void initQProg(void);
    void initQPush(void);
    void initQSlide(void);
    void initQBattery(void);
    void initQBarRuler(void);
    void initQCurveChart(void);
    void initPictureFlow(void);
    void initQVCursor(void);
    void initQVUMeter(void);
    void initQLock(void);
    void initLightButton(void);
    void initLedNumber(void);
    void initImageCalendar(void);
    void initFlatUI(void);
    void initNavButton(void);

private:
    NavListView *listView;
    QStackedWidget *mainStackedWidget;
    QHBoxLayout *listViewLayout;
};

#endif // MAINWINDOW_H
