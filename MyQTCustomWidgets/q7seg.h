#ifndef Q7SEG_H
#define Q7SEG_H

#include <QWidget>
#include <QPainter>

class Q7seg : public QWidget
{
    Q_OBJECT
    Q_ENUMS(NumColor)
    Q_PROPERTY(int num READ num WRITE setNumber);
    Q_PROPERTY(NumColor color READ color WRITE setColor);
public:
    explicit Q7seg(QWidget *parent = nullptr);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    QColor pen() const;
    QColor brush() const;

    enum NumColor
    {
        Red=1, Green=2, Yellow=3
    };

    int num() const
    {
        return value;
    }

    NumColor color() const
    {
        return ncolor;
    }

signals:

public slots:
    void setColor(NumColor);
    void setNumber(int);

protected:
    void paintEvent(QPaintEvent *);
    void paintBorder();
    void paintSegment();

private:
    QColor brushColorArr[8];
    QColor penColorArr[8];
    QColor brushColor;
    QColor penColor;
    QColor brushColorOff;
    QColor penColorOff;
    int penWidth;
    int value;
    NumColor ncolor;
};

#endif // Q7SEG_H
