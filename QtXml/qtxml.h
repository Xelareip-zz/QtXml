#ifndef QTXML_H
#define QTXML_H

#include <QtWidgets/QMainWindow>
#include "ui_qtxml.h"

class QtXml : public QMainWindow
{
	Q_OBJECT

public:
	QtXml(QWidget *parent = 0);
	~QtXml();

private:
	Ui::QtXmlClass ui;
};

#endif // QTXML_H
