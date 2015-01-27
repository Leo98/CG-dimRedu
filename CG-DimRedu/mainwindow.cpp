#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MainWindow.h"
#include <QString>
#include <QPlainTextEdit>
#include <QDebug>
#include <QTime>
#include <QPainter>
#include <QtMath>
#include <QMatrix>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->displayMatrizes->setPlainText(textoMatriz);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::zoomIn(int level)
{
    ui->zoomSlider->setValue(ui->zoomSlider->value() + level);
}

void MainWindow::zoomOut(int level)
{
    ui->zoomSlider->setValue(ui->zoomSlider->value() - level);
}

void MainWindow::setupMatrix()
{
    qreal scale = qPow(qreal(2), (ui->zoomSlider->value() - 250) / qreal(50));

    QMatrix matrix;
    matrix.scale(scale, scale);
    this->setupMatrix();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
            close();
        else
            QWidget::keyPressEvent(event);

}

