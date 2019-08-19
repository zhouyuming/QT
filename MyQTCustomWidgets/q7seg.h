#ifndef Q7SEG_H
#define Q7SEG_H

#include <QWidget>
#include <QPainter>

class Q7seg : public QWidget
{
    Q_OBJECT
public:
    explicit Q7seg(QWidget *parent = nullptr);

signals:

public slots:

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
};

#endif // Q7SEG_H
