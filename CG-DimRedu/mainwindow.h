#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtOpenGL/QGL>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString stringMatrizAleatoria(QString string);

private:
    Ui::MainWindow *ui;
    QString textoMatriz = "";
};

#endif // MAINWINDOW_H
