#include <iostream>
#include <QApplication>
#include <QWidget>

using namespace std;
int main(int argc, char *argv[]) {
	
	QApplication app(argc, argv);
	QWidget *widget = new QWidget;
	widget->setGeometry(0, 0, 1024, 768);
	widget->show();
	
	return app.exec();
	
}
