#ifndef MATRIZES_H
#define MATRIZES_H

#include <QString>

class Matrizes
{
public:
    Matrizes();
    void gerarMatrizAleatoria(int minimo=0, int maximo=20);
    void gerarStringMatriz();

protected:
    float matrix10x3[10][3];
    QString textoMatriz = "";
};

#endif // MATRIZES_H
