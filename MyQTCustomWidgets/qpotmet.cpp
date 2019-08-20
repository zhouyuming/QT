#include "qpotmet.h"

QPotMet::QPotMet(QWidget *parent) : QWidget(parent)
{
    spanAngle = 0;
    startAngle = 225 * 16;
    startPoint = 225 * 16;
    min = 0;
    max = 100;
    value = 0;
    arc = 0;
    dot = 25;
    wheel = 1;
    font = 10;
    precision = 0;
    fstColor = green;
    sndColor = red;


}

void QPotMet::paintEvent(QPaintEvent *)
{
    paintBorder();
    paintArc();
    paintDial();
    paintDot();
    paintValue();

}

void QPotMet::paintDial()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    QRadialGradient radGrad(60, 100, 75);
    radGrad.setColorAt(0, Qt::white);
    radGrad.setColorAt(1, Qt::gray);
    radGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(radGrad);

    QRectF border1(50, 50, 100, 100);
    painter.drawEllipse(border1);

    painter.setPen(QPen(Qt::black, 1, Qt::DotLine, Qt::RoundCap, Qt::RoundJoin));
    QRectF border2(55, 55, 90, 90);
    painter.drawEllipse(border2);

}

void QPotMet::paintBorder()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);

    QLinearGradient linGrad2(190, 100, 195, 100);
    linGrad2.setColorAt(0, QColor(150,150,150));
    linGrad2.setColorAt(1, Qt::black);
    linGrad2.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad2);
    painter.setPen(QPen(Qt::black, 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QRectF border1(5, 5, 190, 190);
    painter.drawRect(border1);

    painter.setPen(QPen(QColor(150,150,150), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    QLinearGradient linGrad1(5, 100, 10, 100);
    linGrad1.setColorAt(0, Qt::white);
    linGrad1.setColorAt(1, QColor(150,150,150));
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);
    QRectF border(5, 5, 2, 190);
    painter.drawRect(border);

    // draw screws
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawEllipse(10, 10, 10, 10);
    painter.drawLine(13, 13, 17, 17);
    painter.drawLine(17, 13, 13, 17);

    painter.drawEllipse(180, 10, 10, 10);
    painter.drawLine(183, 13, 187, 17);
    painter.drawLine(187, 13, 183, 17);

    painter.drawEllipse(10, 180, 10, 10);
    painter.drawLine(13, 183, 17, 187);
    painter.drawLine(17, 183, 13, 187);

    painter.drawEllipse(180, 180, 10, 10);
    painter.drawLine(183, 183, 187, 187);
    painter.drawLine(187, 183, 183, 187);

    QLinearGradient linGrad(20, 150, 250, 160);
    linGrad.setColorAt(0, Qt::white);
    linGrad.setColorAt(1, Qt::black);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QRectF rectangle(30, 30, 140, 140);
    painter.drawPie(rectangle, 225*16, -270*16);

}


void QPotMet::paintArc()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);

    QColor startColor, endColor;

    switch (fstColor)
    {
    case white:
        startColor=QColor(Qt::white);
        break;
    case green:
        startColor=QColor(Qt::green);
        break;
    case red:
        startColor=QColor(Qt::red);
        break;
    case yellow:
        startColor=QColor(Qt::yellow);
        break;
    case magenta:
        startColor=QColor(Qt::magenta);
        break;
    case blue:
        startColor=QColor(Qt::blue);
        break;
    default:
        startColor=QColor(Qt::green);
        break;
    }
    switch (sndColor)
    {
    case white:
        endColor=QColor(Qt::white);
        break;
    case green:
        endColor=QColor(Qt::green);
        break;
    case red:
        endColor=QColor(Qt::red);
        break;
    case yellow:
        endColor=QColor(Qt::yellow);
        break;
    case magenta:
        endColor=QColor(Qt::magenta);
        break;
    case blue:
        endColor=QColor(Qt::blue);
        break;
    default:
        endColor=QColor(Qt::red);
        break;
    }


    QLinearGradient linGrad(80, 100, 140, 140);
    linGrad.setColorAt(0, startColor);
    linGrad.setColorAt(1, endColor);
    linGrad.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QRectF rectangle(30, 30, 140, 140);
    painter.drawPie(rectangle, startAngle, spanAngle);

}


void QPotMet::paintDot()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(QPen(Qt::red, 7, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QRectF rectangle1(60, 60, 80, 80);
    painter.drawArc(rectangle1, startPoint, 5);

    double pi = 3.1415;
    double start = pi + pi/4;
    //double end = -pi/4;
    double range = pi + pi/2;

    double delta = range/dot;

    painter.setPen(QPen(Qt::white, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

    for (int i = 0; i <= dot; i++)
    {

        int x = (75 * cos(start-delta*i))+100;
        int y = -(75 * sin(start-delta*i))+100;
        painter.drawPoint(x, y);

    }

}

void QPotMet::paintValue()

{
    QPainter painter(this);
    painter.setWindow(0, 0, 200, 200);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(Qt::black);

    QLinearGradient linGrad1(35, 160, 40, 160);
    linGrad1.setColorAt(0, Qt::white);
    linGrad1.setColorAt(1, Qt::black);
    linGrad1.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad1);
    QRectF minRect(35, 160, 40, 20);
    painter.drawRect(minRect);

    QLinearGradient linGrad2(80, 160, 85, 160);
    linGrad2.setColorAt(0, Qt::white);
    linGrad2.setColorAt(1, Qt::black);
    linGrad2.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad2);
    QRectF actRect(80, 160, 40, 20);
    painter.drawRect(actRect);

    QLinearGradient linGrad3(125, 160, 130, 160);
    linGrad3.setColorAt(0, Qt::white);
    linGrad3.setColorAt(1, Qt::black);
    linGrad3.setSpread(QGradient::PadSpread);
    painter.setBrush(linGrad3);
    QRectF maxRect(125, 160, 40, 20);
    painter.drawRect(maxRect);


    value = min + (-arc)*(max-min)/4320;

    QString minVal = QString("%1").arg(min,0,'f',precision);
    QString maxVal = QString("%1").arg(max,0,'f',precision);
    QString actVal = QString("%1").arg(value,0,'f',precision);

    painter.setPen(QPen(Qt::yellow));
    QFont valFont("Arial", font, QFont::Bold);
    painter.setFont(valFont);
    painter.drawText(minRect, Qt::AlignCenter, minVal);
    painter.drawText(actRect, Qt::AlignCenter, actVal);
    painter.drawText(maxRect, Qt::AlignCenter, maxVal);

    QRectF min(35, 180, 40, 15);
    QRectF val(80, 180, 40, 15);
    QRectF max(125, 180, 40, 15);
    painter.setPen(QPen(Qt::white));
    QFont labFont("Arial", 8, QFont::Normal);
    painter.setFont(labFont);
    painter.drawText(min, Qt::AlignCenter, "min");
    painter.drawText(val, Qt::AlignCenter, "val");
    painter.drawText(max, Qt::AlignCenter, "max");

    emit valueChanged(value);

}



void QPotMet::setMinValue(double minValue)
{
    min = minValue;
    update();
}

void QPotMet::setMaxValue(double maxValue)
{
    max = maxValue;
    update();
}

void QPotMet::setDotStep(int dotStep)
{
    dot = dotStep;
    update();
}
void QPotMet::setWheelStep(int wheelStep)
{
    wheel = wheelStep;
    update();
}

void QPotMet::setFontDim(int fontDim)
{
    font = fontDim;
    update();
}

void QPotMet::setPrecision(int numPrec)
{
    precision = numPrec;
    update();
}

void QPotMet::setFstColor(MeterColor color)
{
    fstColor = color;
    update();
}

void QPotMet::setSndColor(MeterColor color)
{
    sndColor = color;
    update();
}

void QPotMet::wheelEvent(QWheelEvent *e)
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

QSize QPotMet::minimumSizeHint() const
{
    return QSize(20, 20);
}

QSize QPotMet::sizeHint() const
{
    return QSize(200, 200);
}


