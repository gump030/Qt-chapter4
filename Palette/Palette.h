#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QDialog>
#include <qcombobox.h>
#include <qlabel.h>
#include <qtextedit.h>
#include <qlineedit.h>
#include <qpushbutton.h>

class Palette : public QDialog
{
	Q_OBJECT

public:
	Palette(QWidget *parent = Q_NULLPTR);
	void createCtrlFrame();
	void createContentFrame();
	void fillColorList(QComboBox *);
private slots:
	void ShowWindow();
	void ShowWindowText();
	void ShowButton();
	void ShowButtonText();
	void ShowBase();
private:
	QFrame * ctrlFrame;
	QLabel *windowLabel;
	QComboBox *windowComboBox;
	QLabel *windowTextLabel;
	QComboBox *windowTextComboBox;
	QLabel *buttonLabel;
	QComboBox *buttonComboBox;
	QLabel *buttonTextLabel;
	QComboBox *buttonTextComboBox;
	QLabel *baseLabel;
	QComboBox *baseComboBox;
	QFrame *contentFrame;
	QLabel *label1;
	QComboBox *comboBox1;
	QLabel *label2;
	QLineEdit *lineEdit2;
	QTextEdit *textEdit;
	QPushButton *OkBtn;
	QPushButton *CancelBtn;
};