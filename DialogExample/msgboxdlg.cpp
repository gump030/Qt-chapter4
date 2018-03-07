#include "msgboxdlg.h"

MsgBoxDlg::MsgBoxDlg(QWidget *parent):
	QDialog(parent)
{
	setWindowTitle(tr("标准消息对话框的实例"));
	Label = new QLabel;
	Label->setText(tr("QuestionMsg"));

	questionBtn = new QPushButton;
	questionBtn->setText(tr("QuestionMsg"));

	informationBtn = new QPushButton; 
	informationBtn->setText(tr("InformationMsg"));

	warningBtn = new QPushButton;
	warningBtn->setText(tr("WarningMsg"));

	criticalBtn = new QPushButton;
	criticalBtn->setText(tr("CriticalMsg"));

	aboutBtn = new QPushButton;
	aboutBtn->setText(tr("AboutMsg"));

	aboutQtBtn = new QPushButton;
	aboutQtBtn->setText(tr("AboutQtMsg"));

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(Label, 0, 0, 1, 2);
	mainLayout->addWidget(questionBtn, 1, 0);
	mainLayout->addWidget(informationBtn, 1, 1);
	mainLayout->addWidget(warningBtn, 2, 0);
	mainLayout->addWidget(criticalBtn, 2, 1);
	mainLayout->addWidget(aboutBtn, 3, 0);
	mainLayout->addWidget(aboutQtBtn, 3, 1);

	connect(questionBtn, SIGNAL(clicked()), this, SLOT(showQuestionMsg()));
	connect(informationBtn, SIGNAL(clicked()), this, SLOT(showInfomationMsg()));
	connect(warningBtn, SIGNAL(clicked()), this, SLOT(showWarningMsg()));
	connect(criticalBtn, SIGNAL(clicked()), this, SLOT(showCriticalMsg()));
	connect(aboutBtn, SIGNAL(clicked()), this, SLOT(showAboutMsg()));
	connect(aboutBtn, SIGNAL(clicked()), this, SLOT(showAboutQtMsg()));
}

void MsgBoxDlg::showQuestionMsg()
{

}

void MsgBoxDlg::showInfomationMsg()
{

}

void MsgBoxDlg::showWarningMsg()
{

}

void MsgBoxDlg::showCriticalMsg()
{

}

void MsgBoxDlg::showAboutMsg()
{

}

void MsgBoxDlg::showAboutQtMsg()
{

}
