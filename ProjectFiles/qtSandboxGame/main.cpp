
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

	MyGlWindow myGlWindow2;
	myGlWindow2.show();
	return a.exec();
}
