#include "mainwindow.h"
#include <QApplication>
#include <QGlobal.h>
#include <QTime>

int matrix_10x3[10][3];

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
