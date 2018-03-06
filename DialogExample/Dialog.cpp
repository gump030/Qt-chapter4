#include "Dialog.h"
#include <qfiledialog.h>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("���ֱ�׼�Ի����ʵ��"));
	fileBtn = new QPushButton;		//�����ؼ�����ĳ�ʼ��
	fileBtn->setText(tr("�ļ���׼�Ի���ʵ��"));
	fileLineEdit = new QLineEdit;	//������ʾѡ����ļ���

	mainLayout = new QGridLayout(this);
	mainLayout->addWidget(fileBtn, 0, 0);
	mainLayout->addWidget(fileLineEdit, 0, 1);

	connect(fileBtn, SIGNAL(clicked()), this, SLOT(showFile()));
}

void Dialog::showFile()
{
	QString s = QFileDialog::getOpenFileName(this, "open file dialog", "/", "C++ files(*.cpp)::C files(*,c)::Head files(*.h)");
	fileLineEdit->setText(s);
}