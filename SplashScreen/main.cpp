#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <qsplashscreen.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPixmap pixmap("./image/16.png");	//����һ��QPixmap������������ͼƬ
	QSplashScreen splash(pixmap);		//����Qpixmap���󴴽�һ��QSplashScreen����
	splash.show();						//��ʾ������ͼƬ
	a.processEvents();					//ʹ���������������ͬʱ��Ȼ��ż��Ӧ���������¼�
	MainWindow w;						
	w.show();							//������������󲢳�ʼ��������show()
	splash.finish(&w);					//����������ʼ��
	return a.exec();
}
