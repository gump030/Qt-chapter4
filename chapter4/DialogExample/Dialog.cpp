#include "Dialog.h"
#include <qfiledialog.h>

Dialog::Dialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("各种标准对话框的实例"));
	fileBtn = new QPushButton;		//各个控件对象的初始化
	fileBtn->setText(tr("文件标准对话框实例"));
	fileLineEdit = new QLineEdit;	//用来显示选择的文件名

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