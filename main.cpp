#include "mainwindow.h"

#include <QApplication>
#include <qtcpsocket.h>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
