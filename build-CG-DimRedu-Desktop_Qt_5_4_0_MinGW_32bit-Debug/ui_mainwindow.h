/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDo_Arquivo;
    QAction *actionAleatoriamente;
    QAction *actionSobre;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widgetTopButtons;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *planoCartesiano;
    QWidget *matrizDados;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuInserir_Dados;
    QMenu *menuSobre;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(568, 539);
        MainWindow->setMinimumSize(QSize(568, 539));
        actionDo_Arquivo = new QAction(MainWindow);
        actionDo_Arquivo->setObjectName(QStringLiteral("actionDo_Arquivo"));
        actionAleatoriamente = new QAction(MainWindow);
        actionAleatoriamente->setObjectName(QStringLiteral("actionAleatoriamente"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widgetTopButtons = new QWidget(centralWidget);
        widgetTopButtons->setObjectName(QStringLiteral("widgetTopButtons"));
        widgetTopButtons->setMinimumSize(QSize(400, 25));

        gridLayout->addWidget(widgetTopButtons, 0, 0, 1, 4);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(400, 400));
        planoCartesiano = new QWidget();
        planoCartesiano->setObjectName(QStringLiteral("planoCartesiano"));
        tabWidget->addTab(planoCartesiano, QString());
        matrizDados = new QWidget();
        matrizDados->setObjectName(QStringLiteral("matrizDados"));
        tabWidget->addTab(matrizDados, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(431, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 568, 21));
        menuInserir_Dados = new QMenu(menuBar);
        menuInserir_Dados->setObjectName(QStringLiteral("menuInserir_Dados"));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QStringLiteral("menuSobre"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuInserir_Dados->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuInserir_Dados->addAction(actionDo_Arquivo);
        menuInserir_Dados->addAction(actionAleatoriamente);
        menuSobre->addAction(actionSobre);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionDo_Arquivo->setText(QApplication::translate("MainWindow", "Do Arquivo", 0));
        actionAleatoriamente->setText(QApplication::translate("MainWindow", "Aleatoriamente", 0));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Prosseguir", 0));
        tabWidget->setTabText(tabWidget->indexOf(planoCartesiano), QApplication::translate("MainWindow", "Plano Cartesiano", 0));
        tabWidget->setTabText(tabWidget->indexOf(matrizDados), QApplication::translate("MainWindow", "Matriz de Dados", 0));
        menuInserir_Dados->setTitle(QApplication::translate("MainWindow", "Inserir Dados", 0));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
