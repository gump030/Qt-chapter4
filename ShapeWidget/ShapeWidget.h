#pragma once
#pragma execution_character("utf-8")
#include <QtWidgets/QWidget>
#include <QMouseEvent>
#include <QPainter>
#include <qpixmap.h>
#include <qpoint.h>
#include <qbitmap.h>

class ShapeWidget : public QWidget
{
	Q_OBJECT

public:
	ShapeWidget(QWidget *parent = Q_NULLPTR);
protected:
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	void paintEvent(QPaintEvent *);
private:
	QPoint dragPosition;
};
