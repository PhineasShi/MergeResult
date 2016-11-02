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
	if (mainDir.isRelative()||secDir.isRelative())
	{
		QMessageBox::warning(this,"Incomplate Dirs","Please set all the dirs before merge operation!");
		return;
	}
	qDebug() << mainDir.path() << endl << secDir.path();
	mainDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
	mainDir.setSorting(QDir::Name);
	QFileInfoList mainDirList = mainDir.entryInfoList();
	secDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
	secDir.setSorting(QDir::Name);
	QFileInfoList secSecLvDirList = secDir.entryInfoList();
	for (int i = 0; i < secSecLvDirList.length(); i++)
	{
		QDir mainSecLvDir(mainDir.path()+"/"+ secSecLvDirList[i].fileName());
		if (!mainSecLvDir.exists()) 
		{
			mainSecLvDir.mkdir(mainSecLvDir.path());
		}
		//将该文件夹下的文件夹及其文件夹下的文件拷贝过去	
		QDir secSecLvDir(secSecLvDirList[i].filePath());			
		qDebug() << secSecLvDirList[i].filePath();
		secSecLvDir.setFilter(QDir::Dirs|QDir::NoDotAndDotDot);
		secSecLvDir.setSorting(QDir::Name);
		QFileInfoList secThirdLvDirList = secSecLvDir.entryInfoList();		//获得Sec的第三级文件夹结构
		for (int j = 0; j < secThirdLvDirList.length(); j++)
		{
			QDir mainThirdLvDir(mainSecLvDir.path() + "/" + secThirdLvDirList[j].fileName());
			if (!mainThirdLvDir.exists())
			{
				mainThirdLvDir.mkdir(mainThirdLvDir.path());
			}
			mainThirdLvDir.setFilter(QDir::Files);
			mainThirdLvDir.setSorting(QDir::Name);
			QFileInfoList mainFourthLvDirList = mainThirdLvDir.entryInfoList();
			int lastFileNum = 0;
			for (int k = 0; k < mainFourthLvDirList.length(); k++)
			{
				lastFileNum = lastFileNum > mainFourthLvDirList[k].completeBaseName().toInt() ? lastFileNum : mainFourthLvDirList[k].completeBaseName().toInt();
			}
			QDir secThirdLvDir(secThirdLvDirList[j].filePath());
			secThirdLvDir.setFilter(QDir::Files);
			secThirdLvDir.setSorting(QDir::Name);
			QFileInfoList secFourthLvDirList = secThirdLvDir.entryInfoList();
			for (int k = 0; k < secFourthLvDirList.length(); k++)
			{
				int fileNum = secFourthLvDirList[k].completeBaseName().toInt() + lastFileNum;
				QString fileName = QString::number(fileNum) +"." + secFourthLvDirList[k].suffix();
				QFile::copy(secFourthLvDirList[k].filePath(), mainThirdLvDir.filePath(fileName));
			}
		}
	}
	QMessageBox::information(this,"Merge Succeed","Merge operation Succeed!");
}

void MergeResult::on_pushButton_openDirs_clicked()
{
	mainDir.setPath(QFileDialog::getExistingDirectory(this, "Select MainDir","I:/Tutor/Blurred License/分割好的"));
	if (mainDir.exists())
	{
		ui.label_mainDir->setText("MainDir:\n" + mainDir.path());
	}
	secDir.setPath(QFileDialog::getExistingDirectory(this, "Select SecondaryDir"));
	if (secDir.exists())
	{
		ui.label_secDir->setText("SecondaryDir:\n" + secDir.path());
	}
}
