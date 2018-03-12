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

	QVBoxLayout *layout = new QVBoxLayout;	//����
	layout->addWidget(baseWidget);
	layout->addWidget(detailWidget);
	layout->setSizeConstraint(QLayout::SetFixedSize);	//���ô���Ĵ�С�̶�������������ק�ı��С
	layout->setSpacing(10);								//���ּ��
	setLayout(layout);
}

void ExtensionDlg::createBaseInfo()
{
	baseWidget = new QWidget;

	QLabel *nameLabel = new QLabel(tr("������"));
	QLineEdit *nameEdit = new QLineEdit;
	QLabel *sexLabel = new QLabel(tr("�Ա�"));
	QComboBox *sexComboBox = new QComboBox;	//ѡ���
	sexComboBox->addItem("Ů");
	sexComboBox->addItem("��");

	QPushButton *okButton = new QPushButton(tr("ȷ��"));
	QPushButton *detailButton = new QPushButton(tr("��ϸ"));
	connect(detailButton, SIGNAL(clicked()), this, SLOT(showDetailInfo()));	//�źŲۺ���


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

	QLabel *label1 = new QLabel(tr("���䣺"));
	QLineEdit *ageEdit = new QLineEdit;
	ageEdit->setText("30");
	QLabel *label2 = new QLabel(tr("���ţ�"));
	QComboBox *deptComboBox = new QComboBox;
	deptComboBox->addItem(tr("dept 1"));
	deptComboBox->addItem(tr("dept 2"));
	deptComboBox->addItem(tr("dept 3"));
	deptComboBox->addItem(tr("dept 4"));
	QLabel *label3 = new QLabel(tr("���䣺"));
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