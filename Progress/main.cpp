#include "ProgressDlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ProgressDlg w;
	w.show();
	return a.exec();
}