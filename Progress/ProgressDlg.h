#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QDialog>
#include "ui_ProgressDlg.h"
#include <qlabel.h>
#include <qlineedit.h>
#include <qprogressbar.h>
#include <qcombobox.h>
#include <qpushbutton.h>
#include <qgridlayout.h>

class ProgressDlg : public QDialog
{
	Q_OBJECT

public:
	ProgressDlg(QWidget *parent = Q_NULLPTR);

private:
	QLabel *FileNum;
	QLineEdit *FileNumLineEdit;
	QLabel *ProgressType;
	QComboBox *comboBox;
	QProgressBar *progressBar;
	QPushButton *starBtn;
	QGridLayout *mainLayout;
private slots:
	void startProgress();
};
