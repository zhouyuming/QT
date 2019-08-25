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


#include "qpush1.h"

QPush1::QPush1(QWidget *parent) : QWidget(parent)
{
    initValue();

}

void QPush1::initValue()
{
    pushed = false;
    focus = false;
    colBut = Qt::blue;
    fontText = QFont("Arial", 20, QFont::Normal);
    textBut = "Push Button";
    colText = Qt::black;
    click = 0;
}


void QPush1::paintEvent(QPaintEvent *)
{
    paintButton();
    paintText();
}

void QPush1::paintButton()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 100);
    painter.setRenderHint(QPainter::Antialiasing);

    if (focus == false)
    {
        painter.setPen(QPen(QColor(60, 60, 60), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        QLinearGradient linGrad(5, 100, 100, 80);
        linGrad.setColorAt(0, Qt::gray);
        linGrad.setColorAt(1, Qt::white);
        linGrad.setSpread(QGradient::ReflectSpread);
        painter.setBrush(linGrad);
        QRectF border(5, 5, 190, 90);
        painter.drawRect(border);
        QRadialGradient radGrad(70, 30, 220);
        radGrad.setColorAt(0, Qt::white);
        radGrad.setColorAt(1, colBut);
        radGrad.setSpread(QGradient::PadSpread);
        painter.setBrush(radGrad);
        QRectF border1(15, 15, 170, 70);
        painter.drawRect(border1);
        painter.setPen(QPen(QColor(60, 60, 60), 3));
        painter.drawLine(186, 84, 186, 16);
        painter.drawLine(16, 84, 186, 84);

    }

    if (focus == true)
    {
        if (pushed == false)
        {
            painter.setPen(QPen(QColor(60, 60, 60), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            QLinearGradient linGrad(5, 100, 100, 80);
            linGrad.setColorAt(0, Qt::gray);
            linGrad.setColorAt(1, Qt::white);
            linGrad.setSpread(QGradient::ReflectSpread);
            painter.setBrush(linGrad);
            QRectF border(5, 5, 190, 90);
            painter.drawRect(border);
            QRadialGradient radGrad(70, 30, 220);
            radGrad.setColorAt(0, Qt::white);
            radGrad.setColorAt(1, colBut);
            radGrad.setSpread(QGradient::PadSpread);
            painter.setBrush(radGrad);
            QRectF border1(15, 15, 170, 70);
            painter.drawRect(border1);
            painter.setPen(QPen(QColor(60, 60, 60), 3));
            painter.drawLine(186, 84, 186, 16);
            painter.drawLine(16, 84, 186, 84);
            painter.setPen(QPen(QColor(60, 60, 60), 1, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
            QRectF border2(20, 20, 160, 60);
            painter.drawRect(border2);
            if (click == 1)
            {
                click = 0;
                emit released();
            }

        }

        if (pushed == true)
        {
            painter.setPen(QPen(QColor(60, 60, 60), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            QLinearGradient linGrad(5, 100, 100, 80);
            linGrad.setColorAt(0, Qt::gray);
            linGrad.setColorAt(1, Qt::white);
            linGrad.setSpread(QGradient::ReflectSpread);
            painter.setBrush(linGrad);
            QRectF border(5, 5, 190, 90);
            painter.drawRect(border);
            QRadialGradient radGrad(80, 30, 220);
            radGrad.setColorAt(0, Qt::white);
            radGrad.setColorAt(1, colBut);
            radGrad.setSpread(QGradient::PadSpread);
            painter.setBrush(radGrad);
            QRectF border1(15, 15, 170, 70);
            painter.drawRect(border1);
            painter.setPen(QPen(QColor(60, 60, 60), 1, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
            QRectF border2(22, 22, 160, 60);
            painter.drawRect(border2);

            click = 1;
            emit pressed();
        }
    }
}

void QPush1::paintText()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 100);
    painter.setRenderHint(QPainter::Antialiasing);

    if (pushed == false)
    {
        QRectF text(5, 5, 190, 90);
        painter.setFont(fontText);
        painter.setPen(QPen(colText));
        painter.drawText(text, Qt::AlignCenter, textBut);
    }
    if (pushed == true)
    {
        QRectF text(8, 8, 190, 90);
        painter.setFont(fontText);
        painter.setPen(QPen(colText));
        painter.drawText(text, Qt::AlignCenter, textBut);
    }
}

void QPush1::setText(QString text)
{
    textBut = text;
    update();
}

void QPush1::setFont(QFont font)
{
    fontText = font;
    update();
}

void QPush1::setColorText(QColor colorTx)
{
    colText = colorTx;
    update();
}

void QPush1::setColorButton(QColor colorBt)
{
    colBut = colorBt;
    update();
}

QSize QPush1::minimumSizeHint() const
{
    return QSize(20, 10);
}

QSize QPush1::sizeHint() const
{
    return QSize(200, 100);
}


void QPush1::mousePressEvent(QMouseEvent *e)
{
    double x = e->x();
    double y = e->y();

    double wrun = width();
    double hrun = height();

    double wstart = 200;
    double hstart = 100;

    double dx = wrun/wstart;
    double dy = hrun/hstart;

    if (y>=(5*dy) && y<=(95*dy) && x>=(5*dx) && x<=(195*dx))
    {
        pushed = true;
        update();
    }
}

void QPush1::mouseReleaseEvent(QMouseEvent *e)
{
    double x = e->x();
    double y = e->y();

    double wrun = width();
    double hrun = height();

    double wstart = 200;
    double hstart = 100;

    double dx = wrun/wstart;
    double dy = hrun/hstart;

    if (y>=(5*dy) && y<=(95*dy) && x>=(5*dx) && x<=(195*dx))
    {
        pushed = false;
        update();
    }
}

void QPush1::enterEvent(QEvent *)
{
    focus = true;
    update();
}

void QPush1::leaveEvent(QEvent *)
{
    focus = false;
    update();
}


