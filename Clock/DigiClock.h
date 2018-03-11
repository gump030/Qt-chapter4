#pragma once
#pragma exeuction_character_set("utf-8")
#include <QtWidgets/QDialog>
#include <qtimer.h>
#include <QTime>
#include <qpoint.h>
#include <QMouseEvent>
#include <qlcdnumber.h>
#include <qdatetime.h>

class DigiClock : public QLCDNumber
{
	Q_OBJECT

public:
	DigiClock(QWidget *parent = Q_NULLPTR);
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
private:
	QPoint dragPosition;
	bool showColon;
private slots:
	void showTime();
};
