#include "qpot1.h"

QPot1::QPot1(QWidget *parent) : QWidget(parent)
{
    spanAngle = 0;
    startAngle = 225 * 16;
    startPoint = 225 * 16;
    min = 0;
    max = 100;
    value = 0;
    arc = 0;
    wheel = 1;
    font = 20;
    precision = 0;
    dcolor = green;

}

void QPot1::paintEvent(QPaintEvent *)
{
    paintBorder();
    paintDial();
    paintScale();
    paintValue();
    paintLevel();

}

void QPot1::paintScale()

{
    QPainter painter(this);
    painter.setWindow(-100, -100, 200, 250);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::gray, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    int nSteps1 = 6;

    painter.save();

    for (int i=0; i<=nSteps1; i++)
    {
        painter.drawLine(-45, 45, -40, 40);
        painter.rotate(45);
    }
    painter.restore();

    painter.setPen(QPen(Qt::gray, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    int nSteps2 = 18;

    painter.save();

    for (int i=0; i<=nSteps2; i++)
    {
        painter.drawLine(-42, 42, -40, 40);
        painter.rotate(15);
    }
    painter.restore();

}

void QPot1::paintBorder()

{
    QPainter painter(this);
    painter.setWindow(-100, -100, 200, 250);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    QLinearGradient linGrad1(-90, 15, -85, 15);
    linGrad1.setColorAt(0, Qt::white);
    linGrad1.setColorAt(1, QColor(80,80,80));
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);

    QRectF border(-90, -90, 180, 230);
    painter.drawRect(border);

    painter.setPen(QPen(Qt::gray, 1, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
    QRectF border1(-70, -70, 140, 130);
    painter.drawRect(border1);
    QRectF border2(-70, 70, 140, 60);
    painter.drawRect(border2);


}


void QPot1::paintDial()

{
    QPainter painter(this);
    painter.setWindow(-100, -100, 200, 250);
    painter.setRenderHint(QPainter::Antialiasing);

    QLinearGradient linGrad(-48,0,96,0);
    linGrad.setColorAt(0, Qt::gray);
    linGrad.setColorAt(1, Qt::black);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawEllipse(-48,-48,96,96);


    painter.setBrush(QBrush(Qt::black));

    int nSteps = 35;

    painter.save();

    for (int i=0; i<=nSteps; i++)
    {
        painter.drawEllipse(0, 0, 35, 15 );
        painter.rotate(10);
    }
    painter.restore();

    QRadialGradient radGrad(-33,0,50);
    radGrad.setColorAt(0, Qt::white);
    radGrad.setColorAt(1, Qt::gray);
    painter.setBrush(radGrad);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawEllipse(-33,-33,66,66);
    painter.drawEllipse(-30,-30,60,60);



}

void QPot1::paintValue()

{
    QPainter painter(this);
    painter.setWindow(-100, -100, 200, 250);
    painter.setRenderHint(QPainter::Antialiasing);

    QColor color;

    switch (dcolor)
    {
    case white:
        color=QColor(Qt::white);
        break;
    case green:
        color=QColor(Qt::green);
        break;
    case red:
        color=QColor(Qt::red);
        break;
    case yellow:
        color=QColor(Qt::yellow);
        break;
    case magenta:
        color=QColor(Qt::magenta);
        break;
    case cyan:
        color=QColor(Qt::cyan);
        break;
    default:
        color=QColor(Qt::green);
        break;
    }


    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(Qt::black);

    QRectF valRect(-50, 75, 100, 50);
    painter.drawRect(valRect);


    QLinearGradient linGrad1(-50,100,-45,100);
    linGrad1.setColorAt(0, Qt::white);
    linGrad1.setColorAt(1, Qt::black);
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);
    painter.setPen(QPen(Qt::black));
    QRectF gradRect1(-50,75,100,50);
    painter.drawRect(gradRect1);

    QLinearGradient linGrad(0,75,0,150);
    linGrad.setColorAt(0, Qt::black);
    linGrad.setColorAt(1, color);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);
    painter.setOpacity(0.50);
    QRectF gradRect(-50, 75, 100, 50);
    painter.drawRect(gradRect);

    value = min + (-arc)*(max-min)/4320;
    QString actVal = QString("%1").arg(value,0,'f',precision);

    QFont valFont("SanSerifArial", font, QFont::Bold);
    painter.setFont(valFont);
    painter.setOpacity(1);
    painter.setPen(QPen(color));
    painter.drawText(valRect, Qt::AlignCenter, actVal);

    emit valueChanged(value);


}

void QPot1::paintLevel()

{
    QPainter painter(this);
    painter.setWindow(-100, -100, 200, 250);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(QPen(Qt::black, 7, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    painter.save();
    painter.rotate(-arc/16);
    painter.drawLine(-18, 18, 0, 0);
    painter.restore();


}


void QPot1::setMinValue(double minValue)
{
    min = minValue;
    update();
}

void QPot1::setMaxValue(double maxValue)
{
    max = maxValue;
    update();
}

void QPot1::setWheelStep(int wheelStep)
{
    wheel = wheelStep;
    update();
}

void QPot1::setFontDim(int fontDim)
{
    font = fontDim;
    update();
}

void QPot1::setPrecision(int numPrec)
{
    precision = numPrec;
    update();
}

void QPot1::setColor(DisplayColor dispColor)
{
    dcolor = dispColor;
    update();
}

void QPot1::wheelEvent(QWheelEvent *e)
{
    int delta = e->delta()/wheel;
    arc = spanAngle-delta;

    if (arc <= 0 && arc >= -270*16)
    {
        spanAngle = arc;
        startPoint = startPoint-delta;
        update();
    }

}

QSize QPot1::minimumSizeHint() const
{
    return QSize(20, 25);
}

QSize QPot1::sizeHint() const
{
    return QSize(200, 250);
}


