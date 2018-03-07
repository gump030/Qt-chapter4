#include "msgboxdlg.h"
#include <qmessagebox.h>


MsgBoxDlg::MsgBoxDlg(QWidget *parent):
	QDialog(parent)
{
	setWindowTitle(tr("��׼��Ϣ�Ի����ʵ��"));
	Label = new QLabel;
	Label->setText(tr("��ѡ��һ����Ϣ��"));

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
//Question��Ϣ��
void MsgBoxDlg::showQuestionMsg()
{
	Label->setText(tr("Question Message Box"));
	switch (QMessageBox::question(this, tr("Question��Ϣ��"), tr("�������Ѿ��޸���ɣ��Ƿ�Ҫ��������"), QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Ok))
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
//Information��Ϣ��
void MsgBoxDlg::showInfomationMsg()
{
	Label->setText(tr("Information Message Box"));
	QMessageBox::information(this, tr("Information��Ϣ��"), tr("����Information��Ϣ�����,��ӭ��!"));
	return;
}
//Warning��Ϣ��
void MsgBoxDlg::showWarningMsg()
{
	Label->setText(tr("Warning Message Box"));
	switch (QMessageBox::warning(this, tr("Warning��Ϣ��"), tr("���޸ĵ����ݻ�δ���棬�Ƿ�Ҫ������ĵ����޸�?"), QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel, QMessageBox::Save))
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
//Critical��Ϣ��
void MsgBoxDlg::showCriticalMsg()
{
	Label->setText(tr("Critical Message Box"));
	QMessageBox::critical(this, tr("Critical��Ϣ��"), tr("����һ��Critical��Ϣ�����"));
	return;
}
//About��Ϣ��
void MsgBoxDlg::showAboutMsg()
{
	Label->setText(tr("About Message Box"));
	QMessageBox::about(this, tr("About��Ϣ��"), tr("����һ��About��Ϣ����ԣ�"));
	return;
}
//AboutQt��Ϣ��
void MsgBoxDlg::showAboutQtMsg()
{
	Label->setText(tr("About Qt Mesage Box"));
	QMessageBox::aboutQt(this, tr("About Qt��Ϣ��"));
	return;
}
