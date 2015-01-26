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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "planocartesiano.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDo_Arquivo;
    QAction *actionAleatoriamente;
    QAction *actionSobre;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *LayoutSuperior;
    QPushButton *botaoNormalizar;
    QLabel *labelPlanodeExibicao;
    QComboBox *boxExibicao;
    QPushButton *botaoProjetar;
    QSpacerItem *horizontalSpacer;
    QGridLayout *LayouMeio;
    QTabWidget *tabelaDeVisualizacao;
    QWidget *planoCartesiano;
    QHBoxLayout *horizontalLayout_2;
    PlanoCartesiano *widgetPlanCartesiano;
    QWidget *matrizDados;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *displayMatrizes;
    QVBoxLayout *LayoutCheckBox;
    QCheckBox *exibirCentroide;
    QCheckBox *exibirTodosDados;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *labelEixoX;
    QLabel *labelEixoY;
    QLabel *labelEixoZ;
    QSlider *sliderEixoY;
    QSlider *sliderEixoZ;
    QSlider *sliderEixoX;
    QMenuBar *menuBar;
    QMenu *menuInserir_Dados;
    QMenu *menuSobre;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(568, 619);
        MainWindow->setMinimumSize(QSize(568, 619));
        actionDo_Arquivo = new QAction(MainWindow);
        actionDo_Arquivo->setObjectName(QStringLiteral("actionDo_Arquivo"));
        actionAleatoriamente = new QAction(MainWindow);
        actionAleatoriamente->setObjectName(QStringLiteral("actionAleatoriamente"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QStringLiteral("actionSobre"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        LayoutSuperior = new QHBoxLayout();
        LayoutSuperior->setSpacing(6);
        LayoutSuperior->setObjectName(QStringLiteral("LayoutSuperior"));
        botaoNormalizar = new QPushButton(centralWidget);
        botaoNormalizar->setObjectName(QStringLiteral("botaoNormalizar"));
        botaoNormalizar->setMinimumSize(QSize(93, 28));
        botaoNormalizar->setMaximumSize(QSize(93, 28));

        LayoutSuperior->addWidget(botaoNormalizar);

        labelPlanodeExibicao = new QLabel(centralWidget);
        labelPlanodeExibicao->setObjectName(QStringLiteral("labelPlanodeExibicao"));
        labelPlanodeExibicao->setEnabled(false);

        LayoutSuperior->addWidget(labelPlanodeExibicao);

        boxExibicao = new QComboBox(centralWidget);
        boxExibicao->setObjectName(QStringLiteral("boxExibicao"));
        boxExibicao->setEnabled(false);
        boxExibicao->setMinimumSize(QSize(100, 0));
        boxExibicao->setMaximumSize(QSize(100, 16777215));

        LayoutSuperior->addWidget(boxExibicao);

        botaoProjetar = new QPushButton(centralWidget);
        botaoProjetar->setObjectName(QStringLiteral("botaoProjetar"));
        botaoProjetar->setEnabled(false);

        LayoutSuperior->addWidget(botaoProjetar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutSuperior->addItem(horizontalSpacer);


        verticalLayout->addLayout(LayoutSuperior);

        LayouMeio = new QGridLayout();
        LayouMeio->setSpacing(6);
        LayouMeio->setObjectName(QStringLiteral("LayouMeio"));
        tabelaDeVisualizacao = new QTabWidget(centralWidget);
        tabelaDeVisualizacao->setObjectName(QStringLiteral("tabelaDeVisualizacao"));
        tabelaDeVisualizacao->setMinimumSize(QSize(415, 401));
        tabelaDeVisualizacao->setMaximumSize(QSize(16777215, 16777215));
        tabelaDeVisualizacao->setInputMethodHints(Qt::ImhNone);
        planoCartesiano = new QWidget();
        planoCartesiano->setObjectName(QStringLiteral("planoCartesiano"));
        horizontalLayout_2 = new QHBoxLayout(planoCartesiano);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widgetPlanCartesiano = new PlanoCartesiano(planoCartesiano);
        widgetPlanCartesiano->setObjectName(QStringLiteral("widgetPlanCartesiano"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetPlanCartesiano->sizePolicy().hasHeightForWidth());
        widgetPlanCartesiano->setSizePolicy(sizePolicy);
        widgetPlanCartesiano->setMinimumSize(QSize(391, 356));
        widgetPlanCartesiano->setFocusPolicy(Qt::WheelFocus);
        widgetPlanCartesiano->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_2->addWidget(widgetPlanCartesiano);

        tabelaDeVisualizacao->addTab(planoCartesiano, QString());
        matrizDados = new QWidget();
        matrizDados->setObjectName(QStringLiteral("matrizDados"));
        horizontalLayout = new QHBoxLayout(matrizDados);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        displayMatrizes = new QPlainTextEdit(matrizDados);
        displayMatrizes->setObjectName(QStringLiteral("displayMatrizes"));

        horizontalLayout->addWidget(displayMatrizes);

        tabelaDeVisualizacao->addTab(matrizDados, QString());

        LayouMeio->addWidget(tabelaDeVisualizacao, 0, 0, 1, 1);

        LayoutCheckBox = new QVBoxLayout();
        LayoutCheckBox->setSpacing(6);
        LayoutCheckBox->setObjectName(QStringLiteral("LayoutCheckBox"));
        exibirCentroide = new QCheckBox(centralWidget);
        exibirCentroide->setObjectName(QStringLiteral("exibirCentroide"));
        exibirCentroide->setMaximumSize(QSize(200, 16777215));

        LayoutCheckBox->addWidget(exibirCentroide);

        exibirTodosDados = new QCheckBox(centralWidget);
        exibirTodosDados->setObjectName(QStringLiteral("exibirTodosDados"));
        exibirTodosDados->setMaximumSize(QSize(200, 16777215));

        LayoutCheckBox->addWidget(exibirTodosDados);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LayoutCheckBox->addItem(verticalSpacer);


        LayouMeio->addLayout(LayoutCheckBox, 0, 1, 1, 1);


        verticalLayout->addLayout(LayouMeio);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelEixoX = new QLabel(centralWidget);
        labelEixoX->setObjectName(QStringLiteral("labelEixoX"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelEixoX);

        labelEixoY = new QLabel(centralWidget);
        labelEixoY->setObjectName(QStringLiteral("labelEixoY"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelEixoY);

        labelEixoZ = new QLabel(centralWidget);
        labelEixoZ->setObjectName(QStringLiteral("labelEixoZ"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelEixoZ);

        sliderEixoY = new QSlider(centralWidget);
        sliderEixoY->setObjectName(QStringLiteral("sliderEixoY"));
        sliderEixoY->setMaximum(360);
        sliderEixoY->setSingleStep(16);
        sliderEixoY->setPageStep(15);
        sliderEixoY->setSliderPosition(0);
        sliderEixoY->setOrientation(Qt::Horizontal);
        sliderEixoY->setTickPosition(QSlider::TicksAbove);
        sliderEixoY->setTickInterval(15);

        formLayout->setWidget(2, QFormLayout::FieldRole, sliderEixoY);

        sliderEixoZ = new QSlider(centralWidget);
        sliderEixoZ->setObjectName(QStringLiteral("sliderEixoZ"));
        sliderEixoZ->setMaximum(360);
        sliderEixoZ->setSingleStep(16);
        sliderEixoZ->setPageStep(15);
        sliderEixoZ->setSliderPosition(0);
        sliderEixoZ->setOrientation(Qt::Horizontal);
        sliderEixoZ->setTickPosition(QSlider::TicksAbove);
        sliderEixoZ->setTickInterval(15);

        formLayout->setWidget(3, QFormLayout::FieldRole, sliderEixoZ);

        sliderEixoX = new QSlider(centralWidget);
        sliderEixoX->setObjectName(QStringLiteral("sliderEixoX"));
        sliderEixoX->setMinimum(-360);
        sliderEixoX->setMaximum(360);
        sliderEixoX->setSingleStep(45);
        sliderEixoX->setPageStep(720);
        sliderEixoX->setSliderPosition(0);
        sliderEixoX->setOrientation(Qt::Horizontal);
        sliderEixoX->setTickPosition(QSlider::TicksAbove);
        sliderEixoX->setTickInterval(36);

        formLayout->setWidget(1, QFormLayout::FieldRole, sliderEixoX);


        verticalLayout->addLayout(formLayout);

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
        QObject::connect(sliderEixoX, SIGNAL(valueChanged(int)), widgetPlanCartesiano, SLOT(setRotacaoX(int)));
        QObject::connect(sliderEixoY, SIGNAL(valueChanged(int)), widgetPlanCartesiano, SLOT(setRotacaoY(int)));
        QObject::connect(sliderEixoZ, SIGNAL(valueChanged(int)), widgetPlanCartesiano, SLOT(setRotacaoZ(int)));

        tabelaDeVisualizacao->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionDo_Arquivo->setText(QApplication::translate("MainWindow", "Do Arquivo", 0));
        actionAleatoriamente->setText(QApplication::translate("MainWindow", "Aleatoriamente", 0));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", 0));
        botaoNormalizar->setText(QApplication::translate("MainWindow", "Normalizar", 0));
        labelPlanodeExibicao->setText(QApplication::translate("MainWindow", "Planos de exibi\303\247\303\243o", 0));
        boxExibicao->clear();
        boxExibicao->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "AB", 0)
         << QApplication::translate("MainWindow", "BC", 0)
         << QApplication::translate("MainWindow", "AC", 0)
        );
        botaoProjetar->setText(QApplication::translate("MainWindow", "Projetar no Plano de Exibi\303\247\303\243o", 0));
        tabelaDeVisualizacao->setTabText(tabelaDeVisualizacao->indexOf(planoCartesiano), QApplication::translate("MainWindow", "Plano Cartesiano", 0));
        displayMatrizes->setPlainText(QString());
        tabelaDeVisualizacao->setTabText(tabelaDeVisualizacao->indexOf(matrizDados), QApplication::translate("MainWindow", "Matriz de Dados", 0));
        exibirCentroide->setText(QApplication::translate("MainWindow", "Exibir Centroide", 0));
        exibirTodosDados->setText(QApplication::translate("MainWindow", "Exibir todos os dados", 0));
        labelEixoX->setText(QApplication::translate("MainWindow", "Eixo X", 0));
        labelEixoY->setText(QApplication::translate("MainWindow", "Eixo Y", 0));
        labelEixoZ->setText(QApplication::translate("MainWindow", "Eixo Z", 0));
        menuInserir_Dados->setTitle(QApplication::translate("MainWindow", "Inserir Dados", 0));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
