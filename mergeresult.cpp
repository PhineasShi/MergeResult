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
	mainDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
	mainDir.setSorting(QDir::Name);
	QFileInfoList mainDirList = mainDir.entryInfoList();
	secDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
	secDir.setSorting(QDir::Name);
	QFileInfoList secSecDirList = secDir.entryInfoList();
	for (int i = 0; i < secSecDirList.length(); i++)
	{
		QDir mainSecLvDir(mainDir.path()+"/"+ secSecDirList[i].fileName());
		if (mainSecLvDir.exists()) 
		{
			QDir secThirdLvDir(secSecDirList[i].filePath());
			qDebug() << secSecDirList[i].filePath();
			secThirdLvDir.setFilter(QDir::Dirs | QDir::NoDotAndDotDot);
			secThirdLvDir.setSorting(QDir::Name);
			QFileInfoList secThirdLvDirList = secThirdLvDir.entryInfoList();
			for (int j = 0; j < secThirdLvDirList.length(); j++)
			{
				QDir mainThirdLvDir(mainSecLvDir.path() + "/" + secThirdLvDirList[j].fileName());
				if (true)
				{

				}
			}
		}
		else
		{
			//将该文件夹下的文件夹及其文件夹下的文件拷贝过去
			mainSecLvDir.mkdir(mainSecLvDir.path());
			QDir secThirdLvDir(secSecDirList[i].filePath());
			qDebug() << secSecDirList[i].filePath();
			secThirdLvDir.setFilter(QDir::Dirs|QDir::NoDotAndDotDot);
			secThirdLvDir.setSorting(QDir::Name);
			QFileInfoList secThirdLvDirList = secThirdLvDir.entryInfoList();
			for (int j = 0; j < secThirdLvDirList.length(); j++)
			{
				QDir mainThirdLvDir(mainSecLvDir.path() + "/" + secThirdLvDirList[j].fileName());
				mainThirdLvDir.mkdir(mainThirdLvDir.path());
				QDir secFourthLvDir(secThirdLvDirList[j].filePath());
				qDebug() << secThirdLvDirList[j].filePath();
				secFourthLvDir.setFilter(QDir::Files);
				secFourthLvDir.setSorting(QDir::Name);
				QFileInfoList secFourthLvDirList = secFourthLvDir.entryInfoList();
				for (int k = 0; k < secFourthLvDirList.length(); k++)
				{
					QFile::copy(secFourthLvDirList[k].filePath(),mainThirdLvDir.filePath(secFourthLvDirList[k].fileName()));
				}
			}
		}
	}
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
