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


#include "qcol.h"

QCol::QCol(QWidget *parent) : QWidget(parent)
{
    redY = 225;
    greenY = 225;
    blueY = 225;
    opY = 225;
    redyp = 112.5;
    greenyp = 112.5;
    blueyp = 112.5;
    opyp = 112.5;
}

void QCol::paintEvent(QPaintEvent *)
{
    paintBorder();
    paintBar();
    paintValue();
    paintText();


}


void QCol::paintBorder()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(QColor(80,80,80), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    QLinearGradient linGrad1(10, 100, 15, 100);
    linGrad1.setColorAt(0, Qt::white);
    linGrad1.setColorAt(1, QColor(80,80,80));
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);

    QRectF border(10, 10, 180, 180);
    painter.drawRect(border);

    QLinearGradient linGrad2(190, 100, 195, 100);
    linGrad2.setColorAt(0, QColor(80,80,80));
    linGrad2.setColorAt(1, Qt::black);
    linGrad2.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad2);

    QRectF border1(15, 10, 180, 180);
    painter.drawRect(border1);

}

void QCol::paintBar()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(Qt::black);

    QLinearGradient linGrad1(30,90,35,90);
    linGrad1.setColorAt(0, Qt::gray);
    linGrad1.setColorAt(1, Qt::black);
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);
    QRectF gradRect1(30, 30, 20, 112.5);
    painter.drawRect(gradRect1);

    QLinearGradient redGrad(40, 142.5, 40, 30);
    redGrad.setColorAt(0, Qt::red);
    redGrad.setColorAt(1, Qt::black);
    redGrad.setSpread(QGradient::PadSpread);
    painter.setOpacity(0.75);
    painter.setBrush(redGrad);
    QRectF red(30, 30, 20, redyp);
    painter.drawRect(red);

    QLinearGradient linGrad2(60,90,65,90);
    linGrad2.setColorAt(0, Qt::gray);
    linGrad2.setColorAt(1, Qt::black);
    linGrad2.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad2);
    QRectF gradRect2(60, 30, 20, 112.5);
    painter.drawRect(gradRect2);

    QLinearGradient greenGrad(70, 142.5, 70, 30);
    greenGrad.setColorAt(0, Qt::green);
    greenGrad.setColorAt(1, Qt::black);
    greenGrad.setSpread(QGradient::PadSpread);
    painter.setOpacity(0.75);
    painter.setBrush(greenGrad);
    QRectF green(60, 30, 20, greenyp);
    painter.drawRect(green);

    QLinearGradient linGrad3(90,90,95,90);
    linGrad3.setColorAt(0, Qt::gray);
    linGrad3.setColorAt(1, Qt::black);
    linGrad3.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad3);
    QRectF gradRect3(90, 30, 20, 112.5);
    painter.drawRect(gradRect3);

    QLinearGradient blueGrad(100, 142.5, 100, 30);
    blueGrad.setColorAt(0, Qt::blue);
    blueGrad.setColorAt(1, Qt::black);
    blueGrad.setSpread(QGradient::PadSpread);
    painter.setOpacity(0.75);
    painter.setBrush(blueGrad);
    QRectF blue(90, 30, 20, blueyp);
    painter.drawRect(blue);

    QLinearGradient linGrad4(120,90,125,90);
    linGrad4.setColorAt(0, Qt::gray);
    linGrad4.setColorAt(1, Qt::black);
    linGrad4.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad4);
    QRectF gradRect4(120, 30, 20, 112.5);
    painter.drawRect(gradRect4);

    QLinearGradient opGrad(130, 142.5, 130, 30);
    opGrad.setColorAt(0, Qt::white);
    opGrad.setColorAt(1, Qt::black);
    opGrad.setSpread(QGradient::PadSpread);
    painter.setOpacity(0.75);
    painter.setBrush(opGrad);
    QRectF op(120, 30, 20, opyp);
    painter.drawRect(op);

    painter.setOpacity(1);
    QColor color(redY, greenY, blueY, opY);
    painter.setBrush(color);
    QRectF tot(150, 30, 30, 150.5);
    painter.drawRect(tot);

    emit colorChanged(color);


}

void QCol::paintValue()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(QBrush(Qt::black));

    QRectF redRect(30, 150, 20, 15);
    painter.drawRect(redRect);

    QRectF greenRect(60, 150, 20, 15);
    painter.drawRect(greenRect);

    QRectF blueRect(90, 150, 20, 15);
    painter.drawRect(blueRect);

    QRectF opRect(120, 150, 20, 15);
    painter.drawRect(opRect);

    QFont valFont("SanSerif", 7, QFont::Bold);
    painter.setFont(valFont);
    painter.setPen(Qt::yellow);

    QString redVal = QString("%1").arg(redY,0,'f',0);
    painter.drawText(redRect, Qt::AlignCenter, redVal);

    QString greenVal = QString("%1").arg(greenY,0,'f',0);
    painter.drawText(greenRect, Qt::AlignCenter, greenVal);

    QString blueVal = QString("%1").arg(blueY,0,'f',0);
    painter.drawText(blueRect, Qt::AlignCenter, blueVal);

    QString opVal = QString("%1").arg(opY,0,'f',0);
    painter.drawText(opRect, Qt::AlignCenter, opVal);

}

void QCol::paintText()
{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);

    QRectF R(30, 170, 20, 15);
    QRectF G(60, 170, 20, 15);
    QRectF B(90, 170, 20, 15);
    QRectF A(120, 170, 20, 15);
    painter.setPen(QPen(Qt::white));
    QFont labFont("Arial", 8, QFont::Normal);
    painter.setFont(labFont);
    painter.drawText(R, Qt::AlignCenter, "R");
    painter.drawText(G, Qt::AlignCenter, "G");
    painter.drawText(B, Qt::AlignCenter, "B");
    painter.drawText(A, Qt::AlignCenter, "A");

}

void QCol::mousePressEvent(QMouseEvent *e)
{
    double x = e->x();
    double y = e->y();

    double wrun = width();
    double hrun = height();

    double wstart = 200;
    double hstart = 200;

    double dx = wrun/wstart;
    double dy = hrun/hstart;

    double diff = 60;
    double diff2 = 30;
    double coeff = 2;

    double py = ((y/dy)*coeff)-diff;
    double pyp = (y/dy)-diff2;

    if (py >= 224)
        py = 225;
    if (py <= 1)
        py = 0;

    if (y>=(30*dy) && y<=(142.75*dy))
    {

        if (x>=(30*dx) && x<=(50*dx))
        {
            redY = py;
            redyp = pyp;
        }
        if (x>=(60*dx) && x<=(80*dx))
        {
            greenY = py;
            greenyp = pyp;
        }
        if (x>=(90*dx) && x<=(110*dx))
        {
            blueY = py;
            blueyp = pyp;
        }
        if (x>=(120*dx) && x<=(140*dx))
        {
            opY = py;
            opyp = pyp;
        }

        update();
    }


}

void QCol::mouseMoveEvent(QMouseEvent *e)
{
    double x = e->x();
    double y = e->y();

    double wrun = width();
    double hrun = height();

    double wstart = 200;
    double hstart = 200;

    double dx = wrun/wstart;
    double dy = hrun/hstart;

    double diff = 60;
    double diff2 = 30;
    double coeff = 2;

    double py = ((y/dy)*coeff)-diff;
    double pyp = (y/dy)-diff2;

    if (py >= 224)
        py = 225;
    if (py <= 1)
        py = 0;

    if (y>=(30*dy) && y<=(142.75*dy))
    {

        if (x>=(30*dx) && x<=(50*dx))
        {
            redY = py;
            redyp = pyp;
        }
        if (x>=(60*dx) && x<=(80*dx))
        {
            greenY = py;
            greenyp = pyp;
        }
        if (x>=(90*dx) && x<=(110*dx))
        {
            blueY = py;
            blueyp = pyp;
        }
        if (x>=(120*dx) && x<=(140*dx))
        {
            opY = py;
            opyp = pyp;
        }

        update();
    }


}

QSize QCol::minimumSizeHint() const
{
    return QSize(20, 20);
}

QSize QCol::sizeHint() const
{
    return QSize(200, 200);
}


