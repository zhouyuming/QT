#ifndef IMAGECALENDAR_H
#define IMAGECALENDAR_H

/**
 * 图片背景日历控件
 * 1:可设置六种图片背景风格 黄色风格/蓝色风格/褐色风格/灰色风格/紫色风格/红色风格
 * 2:显示当前日期及农历
 */

#include <QWidget>
#include <QDateTime>
#include <QAction>
#include <QPainter>

#include "lunarcalendarinfo.h"

class ImageCalendar : public QWidget
{
    Q_OBJECT
    Q_ENUMS(CalendarStyle)
    Q_PROPERTY(CalendarStyle calendarStyle READ getCalendarStyle WRITE setCalendarStyle)
public:
    enum CalendarStyle {
        CalendarStyle_Yellow = 0,   //黄色风格
        CalendarStyle_Blue = 1,     //蓝色风格
        CalendarStyle_Brown = 2,    //褐色风格
        CalendarStyle_Gray = 3,     //灰色风格
        CalendarStyle_Purple = 4,   //紫色风格
        CalendarStyle_Red = 5       //红色风格
    };
    explicit ImageCalendar(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *);

private:
    CalendarStyle calendarStyle;    //背景样式
    QImage calendarBg;              //主背景
    QStringList imageNames;         //图片名称集合
    QDateTime currentDate;          //当前时间

private Q_SLOTS:
    void changeStyle();
    void changeDate();

public:
    CalendarStyle getCalendarStyle()const;
    QSize sizeHint()                const;
    QSize minimumSizeHint()         const;

public Q_SLOTS:
    //设置图片日历样式
    void setCalendarStyle(CalendarStyle calendarStyle);
};

#endif // IMAGECALENDAR_H
