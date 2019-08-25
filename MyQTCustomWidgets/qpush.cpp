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


#include "qpush.h"

QPush::QPush(QWidget *parent) : QWidget(parent)
{
    initValue();

}

void QPush::initValue()
{
    pushed = false;
    focus = false;
    colBut = Qt::darkGray;
    fontText = QFont("Arial", 20, QFont::Normal);
    textBut = "Push Button";
    colText = Qt::white;
    click = 0;
}


void QPush::paintEvent(QPaintEvent *)
{
    paintButton();
    paintText();
}

void QPush::paintButton()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 100);
    painter.setRenderHint(QPainter::Antialiasing);

    if (focus == false)
    {
        QColor light = Qt::white;
        QColor dark = colBut.darker(140);
        painter.setPen(QPen(colBut, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        QLinearGradient linGrad(5, 100, 15, 100);
        linGrad.setColorAt(0, light);
        linGrad.setColorAt(1, colBut);
        linGrad.setSpread(QGradient::PadSpread);
        painter.setBrush(linGrad);
        QRectF border(5, 5, 190, 90);
        painter.drawRoundedRect(border, 15, 15);
        QLinearGradient linGrad1(185, 100, 195, 100);
        linGrad1.setColorAt(0, colBut);
        linGrad1.setColorAt(1, dark);
        linGrad1.setSpread(QGradient::PadSpread);
        painter.setBrush(linGrad1);
        QRectF border1(50, 5, 145, 90);
        painter.drawRoundedRect(border1, 15, 15);

    }

    if (focus == true)
    {
        if (pushed == false)
        {
            QColor light = Qt::white;
            QColor dark = colBut.darker(140);
            QColor butOff = colBut.lighter(115);
            painter.setPen(QPen(butOff, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            QLinearGradient linGrad(5, 100, 15, 100);
            linGrad.setColorAt(0, light);
            linGrad.setColorAt(1, butOff);
            linGrad.setSpread(QGradient::PadSpread);
            painter.setBrush(linGrad);
            QRectF border(5, 5, 190, 90);
            painter.drawRoundedRect(border, 15, 15);
            QLinearGradient linGrad1(185, 100, 195, 100);
            linGrad1.setColorAt(0, butOff);
            linGrad1.setColorAt(1, dark);
            linGrad1.setSpread(QGradient::PadSpread);
            painter.setBrush(linGrad1);
            QRectF border1(50, 5, 145, 90);
            painter.drawRoundedRect(border1, 15, 15);
            if(click == 1)
            {
                click = 0;
                emit released();
            }

        }

        if (pushed == true)
        {
            QColor butOn = colBut.darker(100);
            painter.setPen(QPen(butOn, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            QLinearGradient linGrad(5, 100, 15, 100);
            linGrad.setColorAt(0, butOn);
            linGrad.setColorAt(1, butOn);
            linGrad.setSpread(QGradient::PadSpread);
            painter.setBrush(linGrad);
            QRectF border(5, 5, 190, 90);
            painter.drawRoundedRect(border, 15, 15);
            QLinearGradient linGrad1(185, 100, 195, 100);
            linGrad1.setColorAt(0, butOn);
            linGrad1.setColorAt(1, butOn);
            linGrad1.setSpread(QGradient::PadSpread);
            painter.setBrush(linGrad1);
            QRectF border1(50, 5, 145, 90);
            painter.drawRoundedRect(border1, 15, 15);
            QColor square = colBut.darker(125);
            painter.setBrush(square);
            QRectF border2(5, 5, 190, 90);
            painter.drawRoundedRect(border2, 15, 15);

            click = 1;
            emit pressed();
        }
    }
}

void QPush::paintText()

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

void QPush::setText(QString text)
{
    textBut = text;
    update();
}

void QPush::setFont(QFont font)
{
    fontText = font;
    update();
}

void QPush::setColorText(QColor colorTx)
{
    colText = colorTx;
    update();
}

void QPush::setColorButton(QColor colorBt)
{
    colBut = colorBt;
    update();
}

QSize QPush::minimumSizeHint() const
{
    return QSize(20, 10);
}

QSize QPush::sizeHint() const
{
    return QSize(200, 100);
}


void QPush::mousePressEvent(QMouseEvent *e)
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

void QPush::mouseReleaseEvent(QMouseEvent *e)
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

void QPush::enterEvent(QEvent *)
{
    focus = true;
    update();
}

void QPush::leaveEvent(QEvent *)
{
    focus = false;
    update();
}

