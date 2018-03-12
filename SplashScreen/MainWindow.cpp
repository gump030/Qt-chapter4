#include "MainWindow.h"
#include <qtextedit.h>

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	setWindowTitle("Splash Example");
	setWindowIcon(QIcon("./image/16.png"));
	QTextEdit *edit = new QTextEdit;
	edit->setText("Splash Example!");
	setCentralWidget(edit);

	resize(600,450);
	Sleep(1000);		//增加延时模拟初始化
}
