#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QDialog>
#include "ui_Drawer.h"
#include <qtoolbox.h>
#include <qtoolbutton.h>

class Drawer : public QToolBox
{
	Q_OBJECT

public:
	Drawer(QWidget *parent = Q_NULLPTR,Qt::WindowFlags f=0);

private:
	QToolButton *toolBtn1_1;
	QToolButton *toolBtn1_2;
	QToolButton *toolBtn1_3;
	QToolButton *toolBtn1_4;
	QToolButton *toolBtn1_5;
	QToolButton *toolBtn2_1;
	QToolButton *toolBtn2_2;
	QToolButton *toolBtn3_1;
	QToolButton *toolBtn3_2;
};
