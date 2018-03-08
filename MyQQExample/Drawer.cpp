#include "Drawer.h"
#include <qgroupbox.h>
#include <QVBoxLayout>
#include <QCoreApplication>
#include <qdebug.h>
#include <qdir.h>

Drawer::Drawer(QWidget *parent, Qt::WindowFlags f)
	: QToolBox(parent,f)
{
	toolBtn1_1 = new QToolButton;
	toolBtn1_1->setText(tr("张三"));
	toolBtn1_1->setIcon(QPixmap("./image/15852_100.png"));
	toolBtn1_1->setIconSize(QSize(50,50));
	toolBtn1_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_2 = new QToolButton;
	toolBtn1_2->setText(tr("李四"));
	toolBtn1_2->setIcon(QPixmap("./image/15855_100.png"));
	toolBtn1_2->setIconSize(QSize(50, 50));
	toolBtn1_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_3 = new QToolButton;
	toolBtn1_3->setText(tr("王五"));
	toolBtn1_3->setIcon(QPixmap("./image/16236_100.png"));
	toolBtn1_3->setIconSize(QSize(50, 50));
	toolBtn1_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_4 = new QToolButton;
	toolBtn1_4->setText(tr("小赵"));
	toolBtn1_4->setIcon(QPixmap("./image/16237_100.png"));
	toolBtn1_4->setIconSize(QSize(50, 50));
	toolBtn1_4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn1_5 = new QToolButton;
	toolBtn1_5->setText(tr("小孙"));
	toolBtn1_5->setIcon(QPixmap("./image/16238_100.png"));
	toolBtn1_5->setIconSize(QSize(50, 50));
	toolBtn1_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	QGroupBox *groupBox1 = new QGroupBox;
	QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
	layout1->setMargin(10);					//布局中各窗体的显示间距
	layout1->setAlignment(Qt::AlignCenter);	//布局中各窗体的显示位置
	layout1->addWidget(toolBtn1_1);
	layout1->addWidget(toolBtn1_2);
	layout1->addWidget(toolBtn1_3);
	layout1->addWidget(toolBtn1_4);
	layout1->addWidget(toolBtn1_5);
	layout1->addStretch();					//插入一个占位符

	toolBtn2_1 = new QToolButton;
	toolBtn2_1->setText(tr("小王"));
	toolBtn2_1->setIcon(QPixmap("./image/16240_100.png"));
	toolBtn2_1->setIconSize(QSize(50, 50));
	toolBtn2_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn2_2 = new QToolButton;
	toolBtn2_2->setText(tr("小张"));
	toolBtn2_2->setIcon(QPixmap("./image/13641_100.png"));
	toolBtn2_2->setIconSize(QSize(50, 50));
	toolBtn2_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	QGroupBox *groupBox2 = new QGroupBox;
	QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
	layout2->setMargin(10);					//布局中各窗体的显示间距
	layout2->setAlignment(Qt::AlignCenter);	//布局中各窗体的显示位置
	layout2->addWidget(toolBtn2_1);
	layout2->addWidget(toolBtn2_2);

	toolBtn3_1 = new QToolButton;
	toolBtn3_1->setText(tr("小陈"));
	toolBtn3_1->setIcon(QPixmap("./image/16240_100.png"));
	toolBtn3_1->setIconSize(QSize(50, 50));
	toolBtn3_1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	toolBtn3_2 = new QToolButton;
	toolBtn3_2->setText(tr("小李"));
	toolBtn3_2->setIcon(QPixmap("./image/13643_100.png"));
	toolBtn3_2->setIconSize(QSize(50, 50));
	toolBtn3_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	QGroupBox *groupBox3 = new QGroupBox;
	QVBoxLayout *layout3 = new QVBoxLayout(groupBox3);
	layout3->setMargin(10);					//布局中各窗体的显示间距
	layout3->setAlignment(Qt::AlignCenter);	//布局中各窗体的显示位置
	layout3->addWidget(toolBtn3_1);
	layout3->addWidget(toolBtn3_2);

	this->addItem((QWidget*)groupBox1, tr("我的好友"));
	this->addItem((QWidget*)groupBox2, tr("陌生人"));
	this->addItem((QWidget*)groupBox3, tr("黑名单"));
}
