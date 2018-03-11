#include "DigiClock.h"

DigiClock::DigiClock(QWidget *parent)
	: QLCDNumber(parent)
{
	QPalette p = palette();
	p.setColor(QPalette::Window, Qt::blue);	//设置背景色
	setPalette(p);

	setWindowFlags(Qt::FramelessWindowHint);
	setDigitCount(19);					//设置LCD显示的数字个数
	setWindowOpacity(0.5);				//透明度设置

	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
	timer->start(500);					//定时器间隔时间设置
	showTime();
	resize(600, 60);					//重定义大小
	showColon = true;					//初始化
}

void DigiClock::showTime()
{
	QDateTime time = QDateTime::currentDateTime(); //获取当前系统时间
	QString text = time.toString("yyyy-MM-dd hh:mm:ss");
	if (showColon)
	{
		text[16] = ':';
		showColon = false;
	}
	else
	{
		text[16] = ' ';
		showColon = true;
	}
	display(text);
}

void DigiClock::mousePressEvent(QMouseEvent * e)
{
	if (e->button() == Qt::LeftButton) {
		dragPosition = e->globalPos() - frameGeometry().topLeft();
		e->accept();
	}
	if (e->button() == Qt::RightButton) {
		close();
	}
}

void DigiClock::mouseMoveEvent(QMouseEvent * e)
{
	if (e->buttons() & Qt::LeftButton) {
		move(e->globalPos() - dragPosition);
		e->accept();
	}
}