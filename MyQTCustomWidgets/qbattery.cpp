#include "qbattery.h"

QBattery::QBattery(QWidget *parent) : QWidget(parent)
{
    minValue = 0;
    maxValue = 100;
    value = 0;
    alarmValue = 30;
    step = 0.5;

    borderColorStart = QColor(100, 100, 100);
    borderColorEnd = QColor(80, 80, 80);
    alarmColorStart = QColor(250, 118, 113);
    alarmColorEnd = QColor(204, 38, 38);
    normalColorStart = QColor(50, 205, 51);
    normalColorEnd = QColor(60, 179, 133);

    isForward = false;
    currentValue = 0;

    timer = new QTimer(this);
    timer->setInterval(10);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateValue()));
}

void QBattery::paintEvent(QPaintEvent *)
{
    //绘制准备工作,启用反锯齿
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    //绘制边框
    drawBorder(&painter);
    //绘制背景
    drawBg(&painter);
}

void QBattery::drawBorder(QPainter *painter)
{
    painter->save();
    double headWidth = width() / 10;
    double batteryWidth = width() - headWidth;

    //绘制电池边框
    QPointF topLeft(5, 5);
    QPointF bottomRight(batteryWidth, height() - 5);
    batteryRect = QRectF(topLeft, bottomRight);

    painter->setPen(QPen(borderColorStart, 5));
    painter->setBrush(Qt::NoBrush);
    painter->drawRoundedRect(batteryRect, 10, 20);

    //绘制电池头部
    QPointF headRectTopLeft(batteryRect.topRight().x(), height() / 3);
    QPointF headRectBottomRight(width(), height() - height() / 3);
    QRectF headRect(headRectTopLeft, headRectBottomRight);

    QLinearGradient headRectGradient(headRect.topLeft(), headRect.bottomLeft());
    headRectGradient.setColorAt(0.0, borderColorStart);
    headRectGradient.setColorAt(1.0, borderColorEnd);

    painter->setBrush(headRectGradient);
    painter->drawRoundedRect(headRect, 15, 25);
    painter->restore();
}

void QBattery::drawBg(QPainter *painter)
{
    painter->save();
    QLinearGradient batteryGradient(QPointF(0, 0), QPointF(0, height()));

    if (currentValue <= alarmValue) {
        batteryGradient.setColorAt(0.0, alarmColorStart);
        batteryGradient.setColorAt(1.0, alarmColorEnd);
    } else {
        batteryGradient.setColorAt(0.0, normalColorStart);
        batteryGradient.setColorAt(1.0, normalColorEnd);
    }

    painter->setPen(Qt::NoPen);
    painter->setBrush(batteryGradient);

    int margin = qMin(width(), height()) / 20;
    double unit = (batteryRect.width() - (margin * 2)) / 100;
    double width = currentValue * unit;
    QPointF topLeft(batteryRect.topLeft().x() + margin, batteryRect.topLeft().y() + margin);
    QPointF bottomRight(width + margin + 5, batteryRect.bottomRight().y() - margin);
    QRectF rect(topLeft, bottomRight);

    painter->drawRoundedRect(rect, 10, 10);
    painter->restore();
}

void QBattery::updateValue()
{
    if (isForward) {
        currentValue -= step;

        if (currentValue <= value) {
            timer->stop();
        }
    } else {
        currentValue += step;

        if (currentValue >= value) {
            timer->stop();
        }
    }

    update();
}

double QBattery::getMinValue() const
{
    return this->minValue;
}

double QBattery::getMaxValue() const
{
    return this->maxValue;
}

double QBattery::getValue() const
{
    return this->value;
}

double QBattery::getAlarmValue() const
{
    return this->alarmValue;
}

double QBattery::getStep() const
{
    return this->step;
}

QColor QBattery::getBorderColorStart() const
{
    return this->borderColorStart;
}

QColor QBattery::getBorderColorEnd() const
{
    return this->borderColorEnd;
}

QColor QBattery::getAlarmColorStart() const
{
    return this->alarmColorStart;
}

QColor QBattery::getAlarmColorEnd() const
{
    return this->alarmColorEnd;
}

QColor QBattery::getNormalColorStart() const
{
    return this->normalColorStart;
}

QColor QBattery::getNormalColorEnd() const
{
    return this->normalColorEnd;
}

QSize QBattery::sizeHint() const
{
    return QSize(150, 80);
}

QSize QBattery::minimumSizeHint() const
{
    return QSize(30, 10);
}

void QBattery::setRange(double minValue, double maxValue)
{
    //如果最小值大于或者等于最大值则不设置
    if (minValue >= maxValue) {
        return;
    }

    this->minValue = minValue;
    this->maxValue = maxValue;

    //如果目标值不在范围值内,则重新设置目标值
    if (value < minValue || value > maxValue) {
        setValue(value);
    }

    update();
}

void QBattery::setRange(int minValue, int maxValue)
{
    setRange((double)minValue, (double)maxValue);
}

void QBattery::setMinValue(double minValue)
{
    setRange(minValue, maxValue);
}

void QBattery::setMaxValue(double maxValue)
{
    setRange(minValue, maxValue);
}

void QBattery::setValue(double value)
{
    //值小于最小值或者值大于最大值或者值和当前值一致则无需处理
    if (value < minValue || value > maxValue || value == this->value) {
        return;
    }

    emit valueChanged(value);
    this->value = value;

    if (value > currentValue) {
        isForward = false;
    } else if (value < currentValue) {
        isForward = true;
    } else {
        return ;
    }

    timer->start();
    update();
}

void QBattery::setValue(int value)
{
    setValue((double)value);
}

void QBattery::setAlarmValue(double alarmValue)
{
    if (this->alarmValue != alarmValue) {
        this->alarmValue = alarmValue;
        update();
    }
}

void QBattery::setAlarmValue(int alarmValue)
{
    setAlarmValue((double)alarmValue);
}

void QBattery::setStep(double step)
{
    if (this->step != step) {
        this->step = step;
        update();
    }
}

void QBattery::setStep(int step)
{
    setStep((double)step);
}

void QBattery::setBorderColorStart(const QColor &borderColorStart)
{
    if (this->borderColorStart != borderColorStart) {
        this->borderColorStart = borderColorStart;
        update();
    }
}

void QBattery::setBorderColorEnd(const QColor &borderColorEnd)
{
    if (this->borderColorEnd != borderColorEnd) {
        this->borderColorEnd = borderColorEnd;
        update();
    }
}

void QBattery::setAlarmColorStart(const QColor &alarmColorStart)
{
    if (this->alarmColorStart != alarmColorStart) {
        this->alarmColorStart = alarmColorStart;
        update();
    }
}

void QBattery::setAlarmColorEnd(const QColor &alarmColorEnd)
{
    if (this->alarmColorEnd != alarmColorEnd) {
        this->alarmColorEnd = alarmColorEnd;
        update();
    }
}

void QBattery::setNormalColorStart(const QColor &normalColorStart)
{
    if (this->normalColorStart != normalColorStart) {
        this->normalColorStart = normalColorStart;
        update();
    }
}

void QBattery::setNormalColorEnd(const QColor &normalColorEnd)
{
    if (this->normalColorEnd != normalColorEnd) {
        this->normalColorEnd = normalColorEnd;
        update();
    }
}

QBattery::~QBattery()
{
    if (timer->isActive()) {
        timer->stop();
    }
}
