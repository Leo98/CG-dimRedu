#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <QGlobal.h>
#include <QTime>

int main(int argc, char *argv[])
{
    int matrix_10x3[10][3];
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    int highRand = 20;
    int lowRand = 0;
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    for(int i = 0; i < 10; i++ ){
        for(int j=0; j < 3; j++){
            matrix_10x3[i][j] = qrand() % ((highRand + 1) - lowRand) + lowRand;
            std::cout << i << ' ' << j << ' ' << matrix_10x3[i][j] << std::endl;
        }
    }


    return a.exec();
}
