#include "Palette.h"
#include <QHBoxLayout>
#include <qgridlayout.h>
#include <qpixmap.h>

Palette::Palette(QWidget *parent)
	: QDialog(parent)
{
	createCtrlFrame();
	createContentFrame();
	QHBoxLayout *mainLayout = new QHBoxLayout(this);
	mainLayout->addWidget(ctrlFrame);
	mainLayout->addWidget(contentFrame);
}

void Palette::createCtrlFrame()
{
	ctrlFrame = new QFrame;				//颜色选择面板
	windowLabel = new QLabel(tr("QPalette::Window:"));
	windowComboBox = new QComboBox;
	fillColorList(windowComboBox);
	connect(windowComboBox, SIGNAL(activated(int)), this, SLOT(ShowWindow()));

	windowTextLabel = new QLabel(tr("QPalette::WindowText:"));	//窗口前景色
	windowTextComboBox = new QComboBox;
	fillColorList(windowTextComboBox);
	connect(windowTextComboBox, SIGNAL(activated(int)), this, SLOT(ShowWindowText()));

	buttonLabel = new QLabel(tr("QPalette::Button"));			//窗口按钮的颜色
	buttonComboBox = new QComboBox;
	fillColorList(buttonComboBox);
	connect(buttonComboBox, SIGNAL(activated(int)), this, SLOT(ShowButton()));

	buttonTextLabel = new QLabel(tr("QPalette::ButtonText:"));	//窗口按钮上面文本的颜色
	buttonTextComboBox = new QComboBox;
	fillColorList(buttonTextComboBox);
	connect(buttonTextComboBox, SIGNAL(activated(int)), this, SLOT(ShowButtonText()));

	baseLabel = new QLabel(tr("QPalette::Base:"));				
	baseComboBox = new QComboBox;
	fillColorList(baseComboBox);
	connect(baseComboBox, SIGNAL(activated(int)), this, SLOT(ShowBase()));

	QGridLayout *mainLayout = new QGridLayout(ctrlFrame);		//布局管理
	mainLayout->setSpacing(20);
	mainLayout->addWidget(windowLabel, 0, 0);
	mainLayout->addWidget(windowComboBox, 0, 1);
	mainLayout->addWidget(windowTextLabel, 1, 0);
	mainLayout->addWidget(windowTextComboBox, 1, 1);
	mainLayout->addWidget(buttonLabel, 2, 0);
	mainLayout->addWidget(buttonComboBox, 2, 1);
	mainLayout->addWidget(buttonTextLabel, 3, 0);
	mainLayout->addWidget(buttonTextComboBox, 3, 1);
	mainLayout->addWidget(baseLabel, 4, 0);
	mainLayout->addWidget(baseComboBox, 4, 1);
}

void Palette::createContentFrame()
{
	contentFrame = new QFrame;
	label1 = new QLabel(tr("请选择一个值："));
	comboBox1 = new QComboBox;

	label2 = new QLabel(tr("请输入字符串："));
	lineEdit2 = new QLineEdit;

	textEdit = new QTextEdit;

	QGridLayout *TopLayout = new QGridLayout;
	TopLayout->addWidget(label1, 0, 0);
	TopLayout->addWidget(comboBox1, 0, 1);
	TopLayout->addWidget(label2, 1, 0);
	TopLayout->addWidget(lineEdit2, 1, 1);
	TopLayout->addWidget(textEdit, 2, 0, 1, 2);

	OkBtn = new QPushButton(tr("确认"));
	CancelBtn = new QPushButton(tr("取消"));

	QHBoxLayout *BottomLayout = new QHBoxLayout;
	BottomLayout->addStretch(1);
	BottomLayout->addWidget(OkBtn);
	BottomLayout->addWidget(CancelBtn);

	QVBoxLayout *mainLayout = new QVBoxLayout(contentFrame);
	mainLayout->addLayout(TopLayout);
	mainLayout->addLayout(BottomLayout);

	OkBtn->setAutoFillBackground(true);     //允许自动填充  
	CancelBtn->setAutoFillBackground(true);
	contentFrame->setAutoFillBackground(true);
}

void Palette::ShowWindow()					//用于控制背景颜色的显示
{
	QStringList colorList = QColor::colorNames();
	QColor color = QColor(colorList[windowComboBox->currentIndex()]);

	QPalette p = contentFrame->palette();
	p.setColor(QPalette::Window, color);
	contentFrame->setPalette(p);

	contentFrame->update();
}

void Palette::ShowWindowText()				//对窗体前景色进行设计
{
	QStringList colorList = QColor::colorNames();
	QColor color = QColor(colorList[windowTextComboBox->currentIndex()]);

	QPalette p = contentFrame->palette();
	p.setColor(QPalette::WindowText, color);
	contentFrame->setPalette(p);

	contentFrame->update();
}

void Palette::ShowButton()					//button背景色进行改变
{
	QStringList colorList = QColor::colorNames();
	QColor color = QColor(colorList[buttonComboBox->currentIndex()]);

	QPalette p = contentFrame->palette();
	p.setColor(QPalette::Button, color);
	contentFrame->setPalette(p);

	contentFrame->update();
}

void Palette::ShowButtonText()				//button字体颜色改变
{
	QStringList colorList = QColor::colorNames();
	QColor color = QColor(colorList[buttonTextComboBox->currentIndex()]);

	QPalette p = contentFrame->palette();
	p.setColor(QPalette::ButtonText, color);
	contentFrame->setPalette(p);
}

void Palette::ShowBase()					//textEdit背景色改变
{
	QStringList colorList = QColor::colorNames();
	QColor color = QColor(colorList[baseComboBox->currentIndex()]);

	QPalette p = contentFrame->palette();
	p.setColor(QPalette::Base, color);
	contentFrame->setPalette(p);

}

void Palette::fillColorList(QComboBox *comboBox)	//颜色选择框设置
{
	QStringList colorList = QColor::colorNames();
	QString color;
	foreach(color, colorList)
	{
		QPixmap pix(QSize(70, 20));
		pix.fill(QColor(color));
		comboBox->addItem(QIcon(pix), NULL);
		comboBox->setIconSize(QSize(70, 20));
		comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);
	}
}