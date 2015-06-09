
#include <QtWidgets/qapplication.h>
//#include <QtWidgets\qwidget.h>
#include "MyGlWindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//QWidget myWidget;
	//myWidget.show();

	MyGlWindow myGlWindow;
	myGlWindow.show();
	return a.exec();
}
