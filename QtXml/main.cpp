#include "qtxml.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtXml w;
	w.show();
	return a.exec();
}
