#ifndef MERGERESULT_H
#define MERGERESULT_H

#include <QtWidgets/QMainWindow>
#include "ui_mergeresult.h"

#include <QFileDialog>

class MergeResult : public QMainWindow
{
	Q_OBJECT

public:
	MergeResult(QWidget *parent = 0);
	~MergeResult();
public slots:
	void on_pushButton_openDirs_clicked();
	void on_pushButton_merge_clicked();

private:
	Ui::MergeResultClass ui;
	QDir mainDir;
	QDir secDir;
};

#endif // MERGERESULT_H
