#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <qsplashscreen.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPixmap pixmap("./image/16.png");	//创建一个QPixmap对象，设置启动图片
	QSplashScreen splash(pixmap);		//利用Qpixmap对象创建一个QSplashScreen对象
	splash.show();						//显示此启动图片
	a.processEvents();					//使程序再启动画面的同时任然能偶响应鼠标等其他事件
	MainWindow w;						
	w.show();							//创建主窗体对象并初始化，调用show()
	splash.finish(&w);					//主窗体对象初始化
	return a.exec();
}
