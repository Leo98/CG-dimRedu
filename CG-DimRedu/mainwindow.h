#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtOpenGL/QGL>
#include "matrizes.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, protected Matrizes
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *event);

public slots:
    void zoomIn(int level = 1);
    void zoomOut(int level = 1);
    void setupMatrix();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
