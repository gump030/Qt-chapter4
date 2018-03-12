#include "ShapeWidget.h"

ShapeWidget::ShapeWidget(QWidget *parent)
	: QWidget(parent)
{
	QPixmap pix;
	pix.load("./image/16.png", 0, Qt::AvoidDither | Qt::ThresholdDither | Qt::ThresholdAlphaDither);
	resize(pix.size());
	setMask(QBitmap(pix.mask()));
}

void ShapeWidget::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		dragPosition = event->globalPos() - frameGeometry().topLeft();
	}
	if (event->button() == Qt::RightButton)
	{
		close();
	}
}

void ShapeWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (event->button()&Qt::LeftButton)
	{
		move(event->globalPos() - dragPosition);
		event->accept();
	}
}

void ShapeWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.drawPixmap(0, 0, QPixmap("./image/16.png"));
}