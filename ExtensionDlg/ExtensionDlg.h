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
	void createBaseInfo();	//ʵ�ֻ����Ի����岿��
	void createDetailInfo();//ʵ����չ���岿��
	QWidget *baseWidget;	//�����Ի����岿��
	QWidget *detailWidget;	//��չ���岿��
};
