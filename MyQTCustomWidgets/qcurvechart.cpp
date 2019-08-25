#include "qcurvechart.h"

QCurveChart::QCurveChart(QWidget *parent) : QWidget(parent)
{
    minValue = 0;
    maxValue = 100;
    xStep = 10;
    yStep = 10;

    space = 40;
    title = "曲线图";
    showHLine = true;
    showPoint = true;
    showPointBg = true;

    bgColorStart = QColor(79, 79, 79);
    bgColorEnd = QColor(51, 51, 51);
    textColor = QColor(250, 250, 250);
    pointColor = QColor(38, 114, 179);
}

void QCurveChart::paintEvent(QPaintEvent *)
{
    //绘制准备工作,启用反锯齿
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    //绘制背景
    drawBg(&painter);
    //绘制盒子
    drawBox(&painter);
    //绘制文字
    drawText(&painter);
    //绘制标题
    drawTitle(&painter);
    //绘制数据点
    drawPoint(&painter);
}

void QCurveChart::drawBg(QPainter *painter)
{
    painter->save();
    painter->setPen(Qt::NoPen);
    QLinearGradient topGradient(rect().topLeft(), rect().bottomLeft());
    topGradient.setColorAt(0.0, bgColorStart);
    topGradient.setColorAt(1.0, bgColorEnd);
    painter->setBrush(topGradient);
    painter->drawRect(rect());
    painter->restore();
}

void QCurveChart::drawBox(QPainter *painter)
{
    painter->save();

    QPointF topLeftPot(space, space);
    QPointF bottomRightPot(width() - space / 2, height() - space / 2);
    painter->setPen(textColor);
    painter->setBrush(Qt::NoBrush);

    pointRect = QRectF(topLeftPot, bottomRightPot);
    painter->drawRect(pointRect);

    //绘制横线
    if (showHLine) {
        QPen pen(textColor, 1, Qt::DotLine);
        painter->setPen(pen);

        int step = (maxValue - minValue) / xStep;
        double increment = (double)pointRect.height() / step;
        double startY = pointRect.topLeft().y();

        for (int i = 0; i < step - 1; i++) {
            startY += increment;
            QPointF leftPot(pointRect.topLeft().x(), startY);
            QPointF rightPot(pointRect.topRight().x(), startY);
            painter->drawLine(leftPot, rightPot);
        }
    }

    painter->restore();
}

void QCurveChart::drawText(QPainter *painter)
{
    painter->save();

    painter->setPen(textColor);
    painter->setBrush(Qt::NoBrush);

    int step = (maxValue - minValue) / xStep;
    int value = maxValue;
    double increment = (double)pointRect.height() / step;
    double startY = pointRect.topLeft().y();
    QString strValue;

    for (int i = 0; i <= step; i++) {
        strValue = QString("%1").arg(value);
        double textWidth = fontMetrics().width(strValue);
        double textHeight = fontMetrics().height();
        QPointF textPot(pointRect.topLeft().x() - 5 - textWidth, startY + textHeight / 2);
        painter->drawText(textPot, strValue);
        value -= xStep;
        startY += increment;
    }

    painter->restore();
}

void QCurveChart::drawTitle(QPainter *painter)
{
    painter->save();

    painter->setPen(textColor);
    painter->setBrush(Qt::NoBrush);

    double titleX = (double)width() / 2;
    double titleY = space;
    double textWidth = fontMetrics().width(title);
    double textHeight = fontMetrics().height();

    //标题加粗显示
    QFont titleFont;
    titleFont.setBold(true);
    titleFont.setPointSize(10);
    painter->setFont(titleFont);

    QPointF textPot(titleX - textWidth / 2, titleY / 2 + textHeight / 2);
    painter->drawText(textPot, title);

    painter->restore();
}

void QCurveChart::drawPoint(QPainter *painter)
{
    painter->save();

    double startX = pointRect.topRight().x();
    QVector<QPointF> points;

    if (showPointBg) {
        points.push_back(QPointF(startX, pointRect.bottomRight().y()));
    }

    for (int i = 0; i < listData.count(); i++) {
        QPointF dataPot(startX, pointRect.bottomRight().y() - (double)listData.at(i) * (pointRect.height() / (maxValue - minValue)));
        points.push_back(dataPot);
        startX -= yStep;
    }

    if (showPointBg) {
        points.push_back(QPointF(startX, pointRect.bottomRight().y()));
    }

    //如果只有两个数据点不需要处理
    if (showPointBg && points.count() <= 2) {
        painter->restore();
        return;
    }

    painter->setPen(pointColor);

    if (showPointBg) {
        painter->setBrush(QColor(pointColor.red(), pointColor.green(), pointColor.blue(), 150));
        painter->drawPolygon(QPolygonF(points));
    } else {
        painter->setBrush(Qt::NoBrush);
        painter->drawPolyline(QPolygonF(points));
    }

    //绘制坐标点
    if (showPoint) {
        for (int i = 0; i < points.count(); i++) {
            QPointF dataPot = points.at(i);
            painter->setBrush(pointColor);
            painter->drawEllipse(dataPot, 3, 3);
        }
    }

    painter->restore();
}

void QCurveChart::updateData()
{
    int count = pointRect.width() / yStep;
    int i = listData.count() - count;

    if (i > 0) {
        listData.remove(count, i);
    }

    update();
}

double QCurveChart::getMinValue() const
{
    return this->minValue;
}

double QCurveChart::getMaxValue() const
{
    return this->maxValue;
}

double QCurveChart::getXStep() const
{
    return this->xStep;
}

double QCurveChart::getYStep() const
{
    return this->yStep;
}

double QCurveChart::getSpace() const
{
    return this->space;
}

QString QCurveChart::getTitle() const
{
    return this->title;
}

bool QCurveChart::getShowHLine() const
{
    return this->showHLine;
}

bool QCurveChart::getShowPoint() const
{
    return this->showPoint;
}

bool QCurveChart::getShowPointBg() const
{
    return this->showPointBg;
}

QColor QCurveChart::getBgColorStart() const
{
    return this->bgColorStart;
}

QColor QCurveChart::getBgColorEnd() const
{
    return this->bgColorEnd;
}

QColor QCurveChart::getTextColor() const
{
    return this->textColor;
}

QColor QCurveChart::getPointColor() const
{
    return this->pointColor;
}

QSize QCurveChart::sizeHint() const
{
    return QSize(500, 300);
}

QSize QCurveChart::minimumSizeHint() const
{
    return QSize(200, 70);
}

void QCurveChart::addData(double data)
{
    listData.push_front(data);
    updateData();
}

void QCurveChart::setData(QVector<double> data)
{
    listData = data;
    updateData();
}

void QCurveChart::clearData()
{
    listData.clear();
    update();
}

void QCurveChart::setMinValue(double minValue)
{
    if (this->minValue != minValue) {
        this->minValue = minValue;
        update();
    }
}

void QCurveChart::setMaxValue(double maxValue)
{
    if (this->maxValue != maxValue) {
        this->maxValue = maxValue;
        update();
    }
}

void QCurveChart::setXStep(double xStep)
{
    if (this->xStep != xStep) {
        this->xStep = xStep;
        update();
    }
}

void QCurveChart::setYStep(double yStep)
{
    if (this->yStep != yStep) {
        this->yStep = yStep;
        update();
    }
}

void QCurveChart::setSpace(double space)
{
    if (this->space != space) {
        this->space = space;
        update();
    }
}

void QCurveChart::setTitle(const QString &title)
{
    if (this->title != title) {
        this->title = title;
        update();
    }
}

void QCurveChart::setShowHLine(bool showHLine)
{
    if (this->showHLine != showHLine) {
        this->showHLine = showHLine;
        update();
    }
}

void QCurveChart::setShowPoint(bool showPoint)
{
    if (this->showPoint != showPoint) {
        this->showPoint = showPoint;
        update();
    }
}

void QCurveChart::setShowPointBg(bool showPointBg)
{
    if (this->showPointBg != showPointBg) {
        this->showPointBg = showPointBg;
        update();
    }
}

void QCurveChart::setBgColorStart(const QColor &bgColorStart)
{
    if (this->bgColorStart != bgColorStart) {
        this->bgColorStart = bgColorStart;
        update();
    }
}

void QCurveChart::setBgColorEnd(const QColor &bgColorEnd)
{
    if (this->bgColorEnd != bgColorEnd) {
        this->bgColorEnd = bgColorEnd;
        update();
    }
}

void QCurveChart::setTextColor(const QColor &textColor)
{
    if (this->textColor != textColor) {
        this->textColor = textColor;
        update();
    }
}

void QCurveChart::setPointColor(const QColor &pointColor)
{
    if (this->pointColor != pointColor) {
        this->pointColor = pointColor;
        update();
    }
}


