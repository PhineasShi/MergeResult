#include "mergeresult.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MergeResult w;
	w.show();
	return a.exec();
}
