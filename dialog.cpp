#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
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
