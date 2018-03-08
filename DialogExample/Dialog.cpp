#include "Dialog.h"
#include <qfiledialog.h>
#include <qcolordialog.h>
#include <qfontdialog.h>
#include <qmessagebox.h>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("���ֱ�׼�Ի����ʵ��"));
	fileBtn = new QPushButton;		//�����ؼ�����ĳ�ʼ��
	fileBtn->setText(tr("�ļ���׼�Ի���ʵ��"));
	fileLineEdit = new QLineEdit;	//������ʾѡ����ļ���

	colorBtn = new QPushButton;
	colorBtn->setText(tr("��ɫ��׼�Ի���ʵ��"));
	colorFrame = new QFrame;
	colorFrame->setFrameShape(QFrame::Box);
	colorFrame->setAutoFillBackground(true);

	fontBtn = new QPushButton;
	fontBtn->setText(tr("�����׼�Ի���ʵ��"));
	fontLineEdit = new QLineEdit;
	fontLineEdit->setText(tr("Welcome"));

	inputBtn = new QPushButton;
	inputBtn->setText(tr("��׼����Ի���ʵ��"));

	MsgBtn = new QPushButton;
	MsgBtn->setText(tr("��׼��Ϣ�Ի���ʵ��"));

	CustomBtn = new QPushButton;
	CustomBtn->setText(tr("�û��Զ�����Ϣ�Ի���ʵ��"));
	label = new QLabel;
	label->setFrameStyle(QFrame::Panel | QFrame::Sunken);

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);
	mainLayout->addWidget(colorBtn, 1, 0);
	mainLayout->addWidget(colorFrame, 1, 1);
	mainLayout->addWidget(fontBtn, 2, 0);
	mainLayout->addWidget(fontLineEdit, 2, 1);
	mainLayout->addWidget(inputBtn, 3, 0);
	mainLayout->addWidget(MsgBtn, 3, 1);
	mainLayout->addWidget(CustomBtn, 4, 0);
	mainLayout->addWidget(label, 4, 1);

	connect(fileBtn, SIGNAL(clicked()), this, SLOT(showFile()));
	connect(colorBtn, SIGNAL(clicked()), this, SLOT(showColor()));
	connect(fontBtn, SIGNAL(clicked()), this, SLOT(showFont()));
	connect(inputBtn, SIGNAL(clicked()), this, SLOT(showInputDlg()));
	connect(MsgBtn, SIGNAL(clicked()), this, SLOT(showMsgDlg()));
	connect(CustomBtn, SIGNAL(clicked()), this, SLOT(showCustomDlg()));
}

void Dialog::showFile()
{
	QString s = QFileDialog::getOpenFileName(this, "open file dialog", "/", "C++ files(*.cpp)::C files(*,c)::Head files(*.h)");
	fileLineEdit->setText(s);
}

void Dialog::showColor()
{
	QColor c = QColorDialog::getColor(Qt::blue);
	if (c.isValid())
	{
		colorFrame->setPalette(QPalette(c));
	}
}

void Dialog::showFont()
{
	bool ok;
	QFont f = QFontDialog::getFont(&ok);
	if (ok)
	{
		fontLineEdit->setFont(f);
	}
}

void Dialog::showInputDlg()
{
	inputDlg = new InputDlg(this);
	inputDlg->show();
}

void Dialog::showMsgDlg()
{
	msgDlg = new MsgBoxDlg();
	msgDlg->show();
}

void Dialog::showCustomDlg()
{
	label->setText(tr("Custom Message Box"));

	QMessageBox  customMsgBox;
	customMsgBox.setWindowTitle(tr("�û��Զ�����Ϣ��"));

	QPushButton *yesBtn = customMsgBox.addButton(tr("Yes"), QMessageBox::ActionRole);
	QPushButton *noBtn = customMsgBox.addButton(tr("No"), QMessageBox::ActionRole);
	QPushButton *cancelBtn = customMsgBox.addButton(QMessageBox::Cancel);

	customMsgBox.setText(tr("����һ���û��Զ������Ϣ��"));
	customMsgBox.setIconPixmap(QPixmap("Qt.png"));
	customMsgBox.exec();

	if (customMsgBox.clickedButton() == yesBtn)
		label->setText("Custom Message Box/Yes");
	if (customMsgBox.clickedButton() == noBtn)
		label->setText("Custom Message Box/No");
	if (customMsgBox.clickedButton() == cancelBtn)
		label->setText("Custom Message Box/Cancel");
	return;
}