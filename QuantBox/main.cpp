#include "mainwindow.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK")); 
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
