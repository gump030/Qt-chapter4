#pragma once
#pragma execution_character_set("utf-8")
#include <qlabel.h>
#include <qpushbutton.h>
#include <qgridlayout.h>
#include <qdialog.h>

class InputDlg : public QDialog
{
	Q_OBJECT
public:
	InputDlg(QWidget* parent = 0);
private slots:
	void ChangeName();
	void ChangeSex();
	void ChangeAge();
	void ChangeScore();
private:
	QLabel *nameLabel1;
	QLabel *sexLabel1;
	QLabel *ageLabel1;
	QLabel *scoreLabel1;
	QLabel *nameLabel2;
	QLabel *sexLabel2;
	QLabel *ageLabel2;
	QLabel *scoreLabel2;
	QPushButton *nameBtn;
	QPushButton *sexBtn;
	QPushButton *ageBtn;
	QPushButton *scoreBtn;
	QGridLayout *mainLayout;
};