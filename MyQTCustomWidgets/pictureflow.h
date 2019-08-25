/*
  PictureFlow - animated image show widget
  http://pictureflow.googlecode.com

  Copyright (C) 2008 Ariya Hidayat (ariya@kde.org)
  Copyright (C) 2007 Ariya Hidayat (ariya@kde.org)

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/
#ifndef PICTUREFLOW_H
#define PICTUREFLOW_H

#include <QWidget>
#include <QTimer>
#include <QCache>
#include <QPainter>
#include <QKeyEvent>
/*!
  Class PictureFlow implements an image show widget with animation effect
  like Apple's CoverFlow (in iTunes and iPod). Images are arranged in form
  of slides, one main slide is shown at the center with few slides on
  the left and right sides of the center slide. When the next or previous
  slide is brought to the front, the whole slides flow to the right or
  the right with smooth animation effect; until the new slide is finally
  placed at the center.

*/

class PictureFlowPrivate;

class PictureFlow : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QColor backgroundColor READ backgroundColor WRITE setBackgroundColor)
    Q_PROPERTY(QSize slideSize READ slideSize WRITE setSlideSize)
    Q_PROPERTY(int slideCount READ slideCount)
    Q_PROPERTY(int centerIndex READ centerIndex WRITE setCenterIndex)
public:
    enum ReflectionEffect
    {
      NoReflection,
      PlainReflection,
      BlurredReflection
    };
    explicit PictureFlow(QWidget *parent = nullptr);
    ~PictureFlow();

    QColor backgroundColor() const;
    void setBackgroundColor(const QColor& c);
    QSize slideSize() const;
    void setSlideSize(QSize size);
    int slideCount() const;
    QImage slide(int index) const;
    int centerIndex() const;
    ReflectionEffect reflectionEffect() const;
    void setReflectionEffect(ReflectionEffect effect);

signals:
    void centerIndexChanged(int index);

protected:
  void paintEvent(QPaintEvent *event);
  void keyPressEvent(QKeyEvent* event);
  void mousePressEvent(QMouseEvent* event);
  void resizeEvent(QResizeEvent* event);

public slots:
    void addSlide(const QImage& image);
    void addSlide(const QPixmap& pixmap);
    void setSlide(int index, const QImage& image);
    void setSlide(int index, const QPixmap& pixmap);
    void setCenterIndex(int index);
    void clear();
    void showPrevious();
    void showNext();
    void showSlide(int index);
    void render();
    void triggerRender();

private slots:
  void updateAnimation();

private:
  PictureFlowPrivate* d;
};

#endif // PICTUREFLOW_H
