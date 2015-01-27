#include "matrizes.h"
#include <QTime>
#include <QDebug>

Matrizes::Matrizes()
{
    gerarMatrizAleatoria();
    gerarStringMatriz();
}

void Matrizes::gerarMatrizAleatoria(int minimo, int maximo)
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    for(int i = 0; i < 10; i++ ){
        for(int j=0; j < 3; j++){
           matrix10x3[i][j] = (qrand() % ((maximo + 1) - minimo) + minimo);
           matrix10x3[i][j] = matrix10x3[i][j] / 20;
        }

    }
}

void Matrizes::gerarStringMatriz()
{
    textoMatriz += QString("A = [ \n \t");

    for(int i = 0; i < 10; i++ ){
        for(int j=0; j < 3; j++){
           textoMatriz += QString::number(matrix10x3[i][j]*20);
           if(j != 2) textoMatriz += QString("\t");
        }
        textoMatriz += QString("\n \t");

    }
    textoMatriz += QString("\n ]");
}
