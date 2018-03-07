#include "Dialog.h"
#include <qfiledialog.h>
#include <qcolordialog.h>
#include <qfontdialog.h>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("各种标准对话框的实例"));
	fileBtn = new QPushButton;		//各个控件对象的初始化
	fileBtn->setText(tr("文件标准对话框实例"));
	fileLineEdit = new QLineEdit;	//用来显示选择的文件名

	colorBtn = new QPushButton;
	colorBtn->setText(tr("颜色标准对话框实例"));
	colorFrame = new QFrame;
	colorFrame->setFrameShape(QFrame::Box);
	colorFrame->setAutoFillBackground(true);

	fontBtn = new QPushButton;
	fontBtn->setText(tr("字体标准对话框实例"));
	fontLineEdit = new QLineEdit;
	fontLineEdit->setText(tr("Welcome"));

	inputBtn = new QPushButton;
	inputBtn->setText(tr("标准输入对话框实例"));

	MsgBtn = new QPushButton;
	MsgBtn->setText(tr("标准消息对话框实例"));

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);
	mainLayout->addWidget(colorBtn, 1, 0);
	mainLayout->addWidget(colorFrame, 1, 1);
	mainLayout->addWidget(fontBtn, 2, 0);
	mainLayout->addWidget(fontLineEdit, 2, 1);
	mainLayout->addWidget(inputBtn, 3, 0);
	mainLayout->addWidget(MsgBtn, 3, 1);

	connect(fileBtn, SIGNAL(clicked()), this, SLOT(showFile()));
	connect(colorBtn, SIGNAL(clicked()), this, SLOT(showColor()));
	connect(fontBtn, SIGNAL(clicked()), this, SLOT(showFont()));
	connect(inputBtn, SIGNAL(clicked()), this, SLOT(showInputDlg()));
	connect(MsgBtn, SIGNAL(clicked()), this, SLOT(showMsgDlg()));
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
