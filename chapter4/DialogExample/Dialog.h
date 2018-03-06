#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QDialog>
#include "ui_Dialog.h"
#include <qgridlayout.h>
#include <qlineedit.h>
#include <qpushbutton.h>

class Dialog : public QDialog
{
	Q_OBJECT

public:
	Dialog(QWidget *parent = Q_NULLPTR);

private:
	QPushButton *fileBtn;
	QLineEdit *fileLineEdit;
	QGridLayout *mainLayout;
private slots:
	void showFile();
};
