#-------------------------------------------------
#
# Project created by QtCreator 2019-08-19T17:30:21
#
#-------------------------------------------------

QT       += core gui xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyQTCustomWidgets
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        navlistview.cpp \
        pictureflow.cpp \
        q7seg.cpp \
        qbarruler.cpp \
        qbattery.cpp \
        qcol.cpp \
        qcurvechart.cpp \
        qfreq.cpp \
        qlock.cpp \
        qpot.cpp \
        qpot1.cpp \
        qpotmet.cpp \
        qpower.cpp \
        qprog.cpp \
        qpush.cpp \
        qpush1.cpp \
        qslide.cpp \
        qvcursor.cpp \
        qvumeter.cpp

HEADERS += \
        fftw3.h \
        mainwindow.h \
        navlistview.h \
        pictureflow.h \
        q7seg.h \
        qbarruler.h \
        qbattery.h \
        qcol.h \
        qcurvechart.h \
        qfreq.h \
        qlock.h \
        qpot.h \
        qpot1.h \
        qpotmet.h \
        qpower.h \
        qprog.h \
        qpush.h \
        qpush1.h \
        qslide.h \
        qvcursor.h \
        qvumeter.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rc.qrc

LIBS += C:\Users\Administrator\Desktop\QT\MyQTCustomWidgets\libfftw3-3.lib
