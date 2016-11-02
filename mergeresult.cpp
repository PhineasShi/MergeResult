#include "mergeresult.h"

#pragma execution_character_set("utf-8")

MergeResult::MergeResult(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

MergeResult::~MergeResult()
{

}

void MergeResult::on_pushButton_merge_clicked()
{
	//mainDir.setFilter(QDir::Dirs);
	//mainDir.setSorting(QDir::Name);
	//QFileInfoList mainDirList = mainDir.entryInfoList();
	//secDir.setFilter(QDir::Dirs);
	//secDir.setSorting(QDir::Name);
	//QFileInfoList secDirList = secDir.entryInfoList();
	//mainDirList.
}

void MergeResult::on_pushButton_openDirs_clicked()
{
	mainDir.setPath(QFileDialog::getExistingDirectory(this, "Select MainDir","I:/Tutor/Blurred License/·Ö¸îºÃµÄ"));
	if (!mainDir.exists())
	{
		ui.label_mainDir->setText("MainDir:\n" + mainDir.path());
	}
	secDir.setPath(QFileDialog::getExistingDirectory(this, "Select SecondaryDir"));
	if (!secDir.exists())
	{
		ui.label_secDir->setText("SecondaryDir:\n" + secDir.path());
	}
}
