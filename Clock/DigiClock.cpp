#include "DigiClock.h"

DigiClock::DigiClock(QWidget *parent)
	: QLCDNumber(parent)
{
	QPalette p = palette();
	p.setColor(QPalette::Window, Qt::blue);	//���ñ���ɫ
	setPalette(p);

	setWindowFlags(Qt::FramelessWindowHint);
	setDigitCount(19);					//����LCD��ʾ�����ָ���
	setWindowOpacity(0.5);				//͸��������

	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
	timer->start(500);					//��ʱ�����ʱ������
	showTime();
	resize(600, 60);					//�ض����С
	showColon = true;					//��ʼ��
}

void DigiClock::showTime()
{
	QDateTime time = QDateTime::currentDateTime(); //��ȡ��ǰϵͳʱ��
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