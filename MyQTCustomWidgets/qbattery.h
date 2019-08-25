#ifndef QBATTERY_H
#define QBATTERY_H

/**
 * 电池电量控件
 * 1:可设置电池电量,动态切换电池电量变化
 * 2:可设置电池电量警戒值
 * 3:可设置电池电量正常颜色和报警颜色
 * 4:可设置边框渐变颜色
 * 5:可设置电量变化时每次移动的步长
 */

#include <QWidget>
#include <QTimer>
#include <QPainter>

class QBattery : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(double minValue READ getMinValue WRITE setMinValue)
    Q_PROPERTY(double maxValue READ getMaxValue WRITE setMaxValue)
    Q_PROPERTY(double value READ getValue WRITE setValue)
    Q_PROPERTY(double alarmValue READ getAlarmValue WRITE setAlarmValue)
    Q_PROPERTY(int step READ getStep WRITE setStep)

    Q_PROPERTY(QColor borderColorStart READ getBorderColorStart WRITE setBorderColorStart)
    Q_PROPERTY(QColor borderColorEnd READ getBorderColorEnd WRITE setBorderColorEnd)

    Q_PROPERTY(QColor alarmColorStart READ getAlarmColorStart WRITE setAlarmColorStart)
    Q_PROPERTY(QColor alarmColorEnd READ getAlarmColorEnd WRITE setAlarmColorEnd)

    Q_PROPERTY(QColor normalColorStart READ getNormalColorStart WRITE setNormalColorStart)
    Q_PROPERTY(QColor normalColorEnd READ getNormalColorEnd WRITE setNormalColorEnd)
public:
    explicit QBattery(QWidget *parent = nullptr);
    ~QBattery();

protected:
    void paintEvent(QPaintEvent *);
    void drawBorder(QPainter *painter);
    void drawBg(QPainter *painter);

private slots:
    void updateValue();

private:
    double minValue;                //最小值
    double maxValue;                //最大值
    double value;                   //目标电量
    double alarmValue;              //电池电量警戒值

    double step;                    //每次移动的步长

    QColor borderColorStart;        //边框渐变开始颜色
    QColor borderColorEnd;          //边框渐变结束颜色

    QColor alarmColorStart;         //电池低电量时的渐变开始颜色
    QColor alarmColorEnd;           //电池低电量时的渐变结束颜色

    QColor normalColorStart;        //电池正常电量时的渐变开始颜色
    QColor normalColorEnd;          //电池正常电量时的渐变结束颜色

    bool isForward;                 //是否往前移
    double currentValue;            //当前电量
    QRectF batteryRect;             //电池主体区域
    QTimer *timer;                  //绘制定时器

public:
    double getMinValue()            const;
    double getMaxValue()            const;
    double getValue()               const;
    double getAlarmValue()          const;
    double getStep()                const;

    QColor getBorderColorStart()    const;
    QColor getBorderColorEnd()      const;

    QColor getAlarmColorStart()     const;
    QColor getAlarmColorEnd()       const;

    QColor getNormalColorStart()    const;
    QColor getNormalColorEnd()      const;

    QSize sizeHint()                const;
    QSize minimumSizeHint()         const;

public Q_SLOTS:
    //设置范围值
    void setRange(double minValue, double maxValue);
    void setRange(int minValue, int maxValue);

    //设置最大最小值
    void setMinValue(double minValue);
    void setMaxValue(double maxValue);

    //设置电池电量值
    void setValue(double value);
    void setValue(int value);

    //设置电池电量警戒值
    void setAlarmValue(double alarmValue);
    void setAlarmValue(int alarmValue);

    //设置步长
    void setStep(double step);
    void setStep(int step);

    //设置边框渐变颜色
    void setBorderColorStart(const QColor &borderColorStart);
    void setBorderColorEnd(const QColor &borderColorEnd);

    //设置电池电量报警时的渐变颜色
    void setAlarmColorStart(const QColor &alarmColorStart);
    void setAlarmColorEnd(const QColor &alarmColorEnd);

    //设置电池电量正常时的渐变颜色
    void setNormalColorStart(const QColor &normalColorStart);
    void setNormalColorEnd(const QColor &normalColorEnd);

Q_SIGNALS:
    void valueChanged(double value);
};

#endif // QBATTERY_H
