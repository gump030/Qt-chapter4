#include "msgboxdlg.h"
#include <qmessagebox.h>


MsgBoxDlg::MsgBoxDlg(QWidget *parent):
	QDialog(parent)
{
	setWindowTitle(tr("标准消息对话框的实例"));
	Label = new QLabel;
	Label->setText(tr("请选择一种消息框"));

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
	connect(aboutQtBtn, SIGNAL(clicked()), this, SLOT(showAboutQtMsg()));
}
//Question消息框
void MsgBoxDlg::showQuestionMsg()
{
	Label->setText(tr("Question Message Box"));
	switch (QMessageBox::question(this, tr("Question消息框"), tr("您现在已经修改完成，是否要结束程序？"), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok))
	{
	case QMessageBox::Ok:
		Label->setText("Question button/ok");
		break;
	case QMessageBox::Cancel:
		Label->setText("Question button/Cancel");
		break;
	default:
		break;
	}
	return;
}
//Information消息框
void MsgBoxDlg::showInfomationMsg()
{
	Label->setText(tr("Information Message Box"));
	QMessageBox::information(this, tr("Information消息框"), tr("这是Information消息框测试,欢迎您!"));
	return;
}
//Warning消息框
void MsgBoxDlg::showWarningMsg()
{
	Label->setText(tr("Warning Message Box"));
	switch (QMessageBox::warning(this, tr("Warning消息框"), tr("您修改的内容还未保存，是否要保存对文档的修改?"), QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel, QMessageBox::Save))
	{
	case QMessageBox::Save:
		Label->setText(tr("Warning burtton/Save"));
		break;
	case QMessageBox::Discard:
		Label->setText(tr("Warning button/Discard"));
		break;
	case QMessageBox::Cancel:
		Label->setText(tr("Warning button/Cancel"));
		break;
	default:
		break;
	}
	return;
}
//Critical消息框
void MsgBoxDlg::showCriticalMsg()
{
	Label->setText(tr("Critical Message Box"));
	QMessageBox::critical(this, tr("Critical消息框"), tr("这是一个Critical消息框测试"));
	return;
}
//About消息框
void MsgBoxDlg::showAboutMsg()
{
	Label->setText(tr("About Message Box"));
	QMessageBox::about(this, tr("About消息框"), tr("这是一个About消息框测试！"));
	return;
}
//AboutQt消息框
void MsgBoxDlg::showAboutQtMsg()
{
	Label->setText(tr("About Qt Mesage Box"));
	QMessageBox::aboutQt(this, tr("About Qt消息框"));
	return;
}
