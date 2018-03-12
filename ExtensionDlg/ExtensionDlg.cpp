#include "ExtensionDlg.h"
#include <QVBoxLayout>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qpushbutton.h>
#include <qdialogbuttonbox.h>
#include <QHBoxLayout>

ExtensionDlg::ExtensionDlg(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("Extension Dialog"));

	createBaseInfo();
	createDetailInfo();

	QVBoxLayout *layout = new QVBoxLayout;	//布局
	layout->addWidget(baseWidget);
	layout->addWidget(detailWidget);
	layout->setSizeConstraint(QLayout::SetFixedSize);	//设置窗体的大小固定，不能利用拖拽改变大小
	layout->setSpacing(10);								//布局间距
	setLayout(layout);
}

void ExtensionDlg::createBaseInfo()
{
	baseWidget = new QWidget;

	QLabel *nameLabel = new QLabel(tr("姓名："));
	QLineEdit *nameEdit = new QLineEdit;
	QLabel *sexLabel = new QLabel(tr("性别："));
	QComboBox *sexComboBox = new QComboBox;	//选择框
	sexComboBox->addItem("女");
	sexComboBox->addItem("男");

	QPushButton *okButton = new QPushButton(tr("确定"));
	QPushButton *detailButton = new QPushButton(tr("详细"));
	connect(detailButton, SIGNAL(clicked()), this, SLOT(showDetailInfo()));	//信号槽函数


	QDialogButtonBox *btnBox = new QDialogButtonBox(Qt::Vertical);
	btnBox->addButton(okButton, QDialogButtonBox::ActionRole);
	btnBox->addButton(detailButton, QDialogButtonBox::ActionRole);


	QGridLayout *gride = new QGridLayout;
	gride->addWidget(nameLabel, 0, 0);
	gride->addWidget(sexLabel, 1, 0);
	gride->addWidget(nameEdit, 0, 1);
	gride->addWidget(sexComboBox, 1, 1);


	QHBoxLayout *hbox = new QHBoxLayout;
	hbox->addLayout(gride);
	hbox->addStretch();
	hbox->addWidget(btnBox);
	baseWidget->setLayout(hbox);

}

void ExtensionDlg::createDetailInfo()
{
	detailWidget = new QWidget;

	QLabel *label1 = new QLabel(tr("年龄："));
	QLineEdit *ageEdit = new QLineEdit;
	ageEdit->setText("30");
	QLabel *label2 = new QLabel(tr("部门："));
	QComboBox *deptComboBox = new QComboBox;
	deptComboBox->addItem(tr("dept 1"));
	deptComboBox->addItem(tr("dept 2"));
	deptComboBox->addItem(tr("dept 3"));
	deptComboBox->addItem(tr("dept 4"));
	QLabel *label3 = new QLabel(tr("邮箱："));
	QLineEdit *edit = new QLineEdit;


	QGridLayout *grid = new QGridLayout;
	grid->addWidget(label1, 0, 0);
	grid->addWidget(ageEdit, 0, 1);
	grid->addWidget(label2, 1, 0);
	grid->addWidget(deptComboBox, 1, 1);
	grid->addWidget(label3, 2, 0);
	grid->addWidget(edit, 2, 1);

	detailWidget->setLayout(grid);

	detailWidget->hide();

}


void ExtensionDlg::showDetailInfo()
{
	if (detailWidget->isHidden())
	{
		detailWidget->show();
	}
	else
	{
		detailWidget->hide();
	}
}