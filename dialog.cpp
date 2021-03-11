#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString szFile = qApp->applicationDirPath() + "/rtdb.ini";
    RtdbHandle rtdbHandle = rtdb_CreateFromFile(szFile.toStdString().c_str());
    if( rtdb_ConnectEx(rtdbHandle) )
        qDebug()<<"in";
    else
        qDebug()<<"out";
}


Dialog::~Dialog()
{
    delete ui;
}


//    QSqlDatabase db = QSqlDatabase::addDatabase("QOCI");
//    db.setPort(1521);
//    db.setHostName("192.168.20.190");
//    db.setDatabaseName("GXDW");
//    db.setUserName("ECD");
//    db.setPassword("ECD");
//    if (db.open()) {
//        qDebug()<<"in";
//    }
//    else{
//        qDebug()<<"out";
//    }
