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
//https://www.linux-apps.com/p/1132173/
#ifndef QPUSH1_H
#define QPUSH1_H

#include <QtGui>
#include <QWidget>


class QPush1 : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QFont font READ font WRITE setFont);
    Q_PROPERTY(QColor colorTx READ colorText WRITE setColorText);
    Q_PROPERTY(QColor colorBt READ colorButton WRITE setColorButton);
    Q_PROPERTY(QString text READ text WRITE setText);


    QFont font() const
    {
        return fontText;
    }
    QColor colorText() const
    {
        return colText;
    }
    QColor colorButton() const
    {
        return colBut;
    }
    QString text() const
    {
        return textBut;
    }

public:

    QPush1(QWidget *parent = 0);
    QSize minimumSizeHint() const;
    QSize sizeHint() const;


signals:

    void pressed();
    void released();


public slots:

    void setText(QString);
    void setFont(QFont);
    void setColorText(QColor);
    void setColorButton(QColor);

protected:

    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
    void initValue();
    void paintButton();
    void paintText();


private:

    int click;
    bool pushed;
    bool focus;
    QString textBut;
    QString family;
    QColor colBut;
    QColor colText;
    QFont fontText;


};

#endif

