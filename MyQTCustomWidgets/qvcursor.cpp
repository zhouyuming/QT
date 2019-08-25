/***************************************************************************
 *   Copyright (C) 2008 - Giuseppe Cigala                                  *
 *   g_cigala@virgilio.it                                                  *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#include "qvcursor.h"

QVCursor::QVCursor(QWidget *parent) : QWidget(parent)
{
    colBack = QColor(90, 90, 90);
    colScale = Qt::yellow;
    colValue = Qt::yellow;
    dimVal = 13;
    dimScale = 9;
    cy = 473;
    min = 0;
    max = 100;
    precision = 0;

}


void QVCursor::paintEvent(QPaintEvent *)
{
    paintBorder();
    paintCursor();
    paintScale();
    paintValue();

}

void QVCursor::paintBorder()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 520);
    painter.setRenderHint(QPainter::Antialiasing);

    QColor light = Qt::white;
    QColor dark = colBack.darker(140);
    painter.setPen(QPen(colBack, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QLinearGradient linGrad(5, 250, 15, 250);
    linGrad.setColorAt(0, light);
    linGrad.setColorAt(1, colBack);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);
    QRectF border(5, 5, 90, 510);
    painter.drawRoundedRect(border, 30, 5);
    QLinearGradient linGrad1(85, 250, 95, 250);
    linGrad1.setColorAt(0, colBack);
    linGrad1.setColorAt(1, dark);
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);
    QRectF border1(50, 5, 45, 510);
    painter.drawRoundedRect(border1, 50, 5);
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(Qt::black);
    QRectF border2(67, 20, 7, 460);
    painter.drawRect(border2);
}

void QVCursor::paintCursor()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 520);
    painter.setRenderHint(QPainter::Antialiasing);

    QLinearGradient linGrad(67, 250, 70, 250);
    linGrad.setColorAt(0, Qt::black);
    linGrad.setColorAt(1, Qt::white);
    linGrad.setSpread(QGradient::ReflectSpread);
    painter.setBrush(linGrad);
    painter.setPen(QPen(linGrad, 6));

    //draw metal support
    painter.drawLine(70, 470, 70, 30);

    QLinearGradient linGrad1(50, 470, 60, 470);
    linGrad1.setColorAt(0, Qt::gray);
    linGrad1.setColorAt(1, Qt::black);
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);
    painter.setPen(QPen(linGrad1, 2));

    // draw cursor rect and bar
    QRectF cursor(54, cy-8, 32, 15);
    painter.drawRoundRect(cursor);

    painter.setPen(QPen(colScale, 4));
    painter.drawLine(56, cy, 84, cy);

}

void QVCursor::paintScale()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 520);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(QPen(colScale, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawLine(50, 473, 50, 28);

    double numLineL = 10;
    double numLineS = numLineL*5;
    double size = 445;

    for (int i = 0; i<=numLineL; i++)
    {
        painter.drawLine(45, 473-(i*size/numLineL), 50, 473-(i*size/numLineL));
    }

    for (int i = 0; i<=numLineS; i++)
    {
        painter.drawLine(47, 473-(i*size/numLineS), 50, 473-(i*size/numLineS));
    }

    double deltaVal = abs(max-min)/10.0;
    double deltaY = 44.5;

    painter.setPen(QPen(colScale, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QFont valFont("Arial", dimScale, QFont::Normal);
    painter.setFont(valFont);

    for (int i = 0; i<=numLineL; i++)
    {
        QString val = QString("%1").arg(min+(deltaVal*i), 0,'f', precision);
        QRectF valR(15, 465-deltaY*i, 25, 20);
        painter.drawText(valR, Qt::AlignRight, val);
    }
}

void QVCursor::paintValue()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 100, 520);
    painter.setRenderHint(QPainter::Antialiasing);

    QLinearGradient linGrad(20, 500, 25, 500);
    linGrad.setColorAt(0, Qt::white);
    linGrad.setColorAt(1, Qt::black);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);
    painter.drawRect(20, 485, 60, 25);

    // set actual value
    double act = min+(max-min)*((473-cy)/445);
    QString val = QString("%1").arg(act, 0,'f', precision);
    QRectF valR(20, 485, 60, 25);
    painter.setPen(QPen(colValue, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QFont valFont("Arial", dimVal, QFont::Bold);
    painter.setFont(valFont);
    painter.drawText(valR, Qt::AlignCenter, val);

    emit valueChanged(act);

}


void QVCursor::mousePressEvent(QMouseEvent *e)
{
    double x = e->x();
    double y = e->y();

    double wrun = width();
    double hrun = height();

    double wstart = 100;
    double hstart = 520;

    double dx = wrun/wstart;
    double dy = hrun/hstart;

    if (x>=(50*dx) && x<=(90*dx) && y >=(26*dy) && y <=(474*dy))
    {
        cy = (y/dy);
        update();
    }
}


void QVCursor::mouseMoveEvent(QMouseEvent *e)
{
    double x = e->x();
    double y = e->y();

    double wrun = width();
    double hrun = height();

    double wstart = 100;
    double hstart = 520;

    double dx = wrun/wstart;
    double dy = hrun/hstart;

    if (x>=(50*dx) && x<=(90*dx) && y >=(26*dy) && y <=(474*dy))
    {
        cy = (y/dy);
        update();
    }
}

void QVCursor::setScaleDim(int scaleDim)
{
    dimScale = scaleDim;
    update();
}

void QVCursor::setValueDim(int valueDim)
{
    dimVal = valueDim;
    update();
}

void QVCursor::setColorBg(QColor colorBg)
{
    colBack = colorBg;
    update();
}

void QVCursor::setColorValue(QColor colorValue)
{
    colValue = colorValue;
    update();
}

void QVCursor::setColorScale(QColor colorScale)
{
    colScale = colorScale;
    update();
}

void QVCursor::setMinValue(double minValue)
{
    if (minValue > max)
    {
        min = max;
        max = minValue;
    }
    else
    {
        min = minValue;
    }
    update();
}

void QVCursor::setMaxValue(double maxValue)
{
    if (maxValue < min)
    {
        max = min;
        min = maxValue;
    }
    else
    {
        max = maxValue;
    }
    update();
}


void QVCursor::setPrecValue(int precValue)
{
    if (precValue < 0)
    {
        precision = 0;
    }
    else
    {
        precision = precValue;
    }
    update();
}


QSize QVCursor::minimumSizeHint() const
{
    return QSize(10, 52);
}

QSize QVCursor::sizeHint() const
{
    return QSize(100, 520);
}


