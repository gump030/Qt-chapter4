#include "Dialog.h"
#include <qfiledialog.h>
#include <qcolordialog.h>
#include <qfontdialog.h>

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

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);
	mainLayout->addWidget(colorBtn, 1, 0);
	mainLayout->addWidget(colorFrame, 1, 1);
	mainLayout->addWidget(fontBtn, 2, 0);
	mainLayout->addWidget(fontLineEdit, 2, 1);

	connect(fileBtn, SIGNAL(clicked()), this, SLOT(showFile()));
	connect(colorBtn, SIGNAL(clicked()), this, SLOT(showColor()));
	connect(fontBtn, SIGNAL(clicked()), this, SLOT(showFont()));

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