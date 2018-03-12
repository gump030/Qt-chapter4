#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QDialog>

class ExtensionDlg : public QDialog
{
	Q_OBJECT

public:
	ExtensionDlg(QWidget *parent = Q_NULLPTR);
private slots:
	void showDetailInfo();
private:
	void createBaseInfo();	//实现基本对话窗体部分
	void createDetailInfo();//实现扩展窗体部分
	QWidget *baseWidget;	//基本对话窗体部分
	QWidget *detailWidget;	//扩展窗体部分
};
