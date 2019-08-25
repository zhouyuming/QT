#ifndef QLOCK_H
#define QLOCK_H
//https://www.linux-apps.com/p/1132188/
#include <QWidget>
#include <QPainter>
#include <QWheelEvent>
#include <QMouseEvent>
#include <QCoreApplication>
#include <QCryptographicHash>

class QLock : public QWidget
{
    Q_OBJECT
public:
    explicit QLock(QWidget *parent = nullptr);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;


signals:

    void isLocked(bool);

public slots:



protected:

    void paintEvent(QPaintEvent *);
    void wheelEvent(QWheelEvent *);
    void mousePressEvent(QMouseEvent *);
    void paintBorder();
    void paintWheels();
    void paintNumbers();
    void paintState();






private:

    int val1;
    int val2;
    int val3;
    int val4;
    int val5;
    int delta;
    QByteArray combination;
    QColor colLock;
    QColor colUnlock;
};

#endif // QLOCK_H
