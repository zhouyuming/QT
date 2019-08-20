#ifndef QPOT1_H
#define QPOT1_H

#include <QWidget>
#include <QtGui>
#include <math.h>
#include <QPainter>

class QPot1 : public QWidget
{
    Q_OBJECT
    Q_ENUMS(DisplayColor);
    Q_PROPERTY(double minValue READ minValue WRITE setMinValue);
    Q_PROPERTY(double maxValue READ maxValue WRITE setMaxValue);
    Q_PROPERTY(int wheelStep READ wheelStep WRITE setWheelStep);
    Q_PROPERTY(int fontDim READ fontDim WRITE setFontDim);
    Q_PROPERTY(int numPrec READ numPrec WRITE setPrecision);
    Q_PROPERTY(DisplayColor dispColor READ color WRITE setColor);

public:

    QPot1(QWidget *parent = 0);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    enum DisplayColor
    {
        white, green, red, yellow, magenta, cyan
    };
    double actValue() const
    {
        return value;
    }
    double minValue() const
    {
        return min;
    }
    double maxValue() const
    {
        return max;
    }
    int wheelStep() const
    {
        return wheel;
    }
    int fontDim() const
    {
        return font;
    }
    int numPrec() const
    {
        return precision;
    }
    DisplayColor color() const
    {
        return dcolor;
    }


signals:

    void valueChanged(double);

public slots:

    void setMinValue(double);
    void setMaxValue(double);
    void setWheelStep(int);
    void setFontDim(int);
    void setPrecision(int);
    void setColor(DisplayColor);

protected:

    void paintEvent(QPaintEvent *);
    void wheelEvent(QWheelEvent *);
    void paintLevel();
    void paintDial();
    void paintBorder();
    void paintValue();
    void paintScale();


private:

    int spanAngle;
    int startAngle;
    int startPoint;
    double arc;
    double value;
    double min;
    double max;
    int wheel;
    int font;
    int precision;
    DisplayColor dcolor;

};

#endif

