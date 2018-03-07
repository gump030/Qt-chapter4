#pragma once
#pragma execution_character_set("utf-8")
#include <qlabel.h>
#include <qpushbutton.h>
#include <qgridlayout.h>
#include <QDialog>

class MsgBoxDlg :public QDialog
{
	Q_OBJECT
public:
	MsgBoxDlg(QWidget* parent = 0);
private slots:
	void showQuestionMsg();
	void showInfomationMsg();
	void showWarningMsg();
	void showCriticalMsg();
	void showAboutMsg();
	void showAboutQtMsg();
private:
	QLabel * Label;
	QPushButton *questionBtn;
	QPushButton *informationBtn;
	QPushButton *warningBtn;
	QPushButton *criticalBtn;
	QPushButton *aboutBtn;
	QPushButton *aboutQtBtn;
	QGridLayout *mainLayout;
};