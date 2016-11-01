#ifndef MERGERESULT_H
#define MERGERESULT_H

#include <QtWidgets/QMainWindow>
#include "ui_mergeresult.h"

class MergeResult : public QMainWindow
{
	Q_OBJECT

public:
	MergeResult(QWidget *parent = 0);
	~MergeResult();

private:
	Ui::MergeResultClass ui;

	void merge();
};

#endif // MERGERESULT_H
