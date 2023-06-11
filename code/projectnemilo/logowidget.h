#ifndef LOGOWIDGET_H
#define LOGOWIDGET_H

#include <QWidget>
#include <QPainter>

class LogoWidget : public QWidget
{
public:
    LogoWidget(QWidget* parent = nullptr) : QWidget(parent)
    {
        setFixedSize(100, 100); // Set the size of the logo widget to half
    }

protected:
    void paintEvent(QPaintEvent* event) override
    {
        Q_UNUSED(event);

        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setBrush(QColorConstants::Svg::lightblue);
        painter.setPen(Qt::NoPen);
        painter.drawRect(25, 15, 50, 75);
        painter.setBrush(QColorConstants::Svg::blueviolet);
        painter.drawRect(25, 15, 50, 10);
        painter.drawRect(25, 80, 50, 10);
        painter.setPen(Qt::black);
        painter.setBrush(Qt::NoBrush);

        painter.drawRect(25, 15, 5, 75);
        painter.drawRect(70, 15, 5, 75);
        painter.setPen(Qt::black);

        painter.setFont(QFont("Arial", 6, QFont::Bold));

        painter.drawText(rect(), Qt::AlignCenter, "BookShop");
    }
};

#endif // LOGOWIDGET_H
