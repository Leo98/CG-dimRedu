#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QPlainTextEdit>
#include <QDebug>
#include <QTime>
#include <sstream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    textoMatriz = stringMatrizAleatoria(textoMatriz);
    ui->setupUi(this);
    ui->displayMatrizes->setPlainText(textoMatriz);

}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::stringMatrizAleatoria(QString string)
{
    int highRand = 20;
    int lowRand = 0;

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    string += QString("A = [ \n \t");

    for(int i = 0; i < 10; i++ ){
        for(int j=0; j < 3; j++){
           int x = (qrand() % ((highRand + 1) - lowRand) + lowRand);
           string += QString::number(x);
           if(j != 2) string += QString("\t");
        }
        string += QString("\n \t");

    }
    string += QString("\n ]");
    return string;
}

