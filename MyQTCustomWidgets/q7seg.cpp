#include "q7seg.h"

Q7seg::Q7seg(QWidget *parent) : QWidget(parent)
{
    brushColor = QColor(40, 40, 40, 255);
    penColor = QColor(60, 60, 60, 255);
    brushColorOff = QColor(40, 40, 40, 255);
    penColorOff = QColor(60, 60, 60, 255);
    penWidth = 7;
    //setColor(Red);
    //setNumber(0);
}

void Q7seg::paintEvent(QPaintEvent *)
{
    paintBorder();
    paintSegment();
}

void Q7seg::paintBorder()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 350, 400);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    QLinearGradient linGrad(30, 200, 200, 150);
    linGrad.setColorAt(0, Qt::darkGray);
    linGrad.setColorAt(1, Qt::white);
    linGrad.setSpread(QGradient::ReflectSpread);
    painter.setBrush(linGrad);
    QRectF border2(30, 30, 290, 340);
    painter.drawRoundedRect(border2, 5, 5);

    painter.setBrush(QBrush(QColor(Qt::black)));
    QRectF border1(50, 50, 250, 300);
    painter.drawRoundedRect(border1, 5, 5);
}

void Q7seg::paintSegment()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 350, 400);
    painter.setRenderHint(QPainter::Antialiasing);

    QPainterPath seg1;
    QPolygonF pol1;
    pol1 << QPointF(67, 60) << QPointF(283, 60) << QPointF(253, 90) << QPointF(97, 90) << QPointF(67, 60);
    seg1.addPolygon(pol1);
    painter.setPen(QPen(penColorArr[1], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[1], Qt::SolidPattern));
    painter.drawPath(seg1);

    /*QPainterPath seg2;
    QPolygonF pol2;
    pol2 << QPointF(60, 67) << QPointF(90, 97) << QPointF(90, 178) << QPointF(60, 193) << QPointF(60, 67);
    seg2.addPolygon(pol2);
    painter.setPen(QPen(penColorArr[2], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[2], Qt::SolidPattern));
    painter.drawPath(seg2);

    QPainterPath seg3;
    QPolygonF pol3;
    pol3 << QPointF(290, 67) << QPointF(260, 97) << QPointF(260, 178) << QPointF(290, 193) << QPointF(290, 67);
    seg3.addPolygon(pol3);
    painter.setPen(QPen(penColorArr[3], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[3], Qt::SolidPattern));
    painter.drawPath(seg3);

    QPainterPath seg4;
    QPolygonF pol4;
    pol4 << QPointF(67, 200) << QPointF(97, 185) << QPointF(253, 185) << QPointF(283, 200) << QPointF(253, 215) << QPointF(97, 215) << QPointF(67, 200);
    seg4.addPolygon(pol4);
    painter.setPen(QPen(penColorArr[4], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[4], Qt::SolidPattern));
    painter.drawPath(seg4);

    QPainterPath seg5;
    QPolygonF pol5;
    pol5 << QPointF(60, 207) << QPointF(90, 222) << QPointF(90, 303) << QPointF(60, 333) << QPointF(60, 207);
    seg5.addPolygon(pol5);
    painter.setPen(QPen(penColorArr[5], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[5], Qt::SolidPattern));
    painter.drawPath(seg5);

    QPainterPath seg6;
    QPolygonF pol6;
    pol6 << QPointF(67, 340) << QPointF(283, 340) << QPointF(253, 310) << QPointF(97, 310) << QPointF(67, 340);
    seg6.addPolygon(pol6);
    painter.setPen(QPen(penColorArr[6], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[6], Qt::SolidPattern));
    painter.drawPath(seg6);

    QPainterPath seg7;
    QPolygonF pol7;
    pol7 << QPointF(290, 207) << QPointF(260, 222) << QPointF(260, 303) << QPointF(290, 333) << QPointF(290, 207);
    seg7.addPolygon(pol7);
    painter.setPen(QPen(penColorArr[7], penWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(brushColorArr[7], Qt::SolidPattern));
    painter.drawPath(seg7);*/
}
