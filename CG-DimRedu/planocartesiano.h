#ifndef PLANOCARTESIANO_H
#define PLANOCARTESIANO_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class PlanoCartesiano : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit PlanoCartesiano(QWidget *parent = 0);
    ~PlanoCartesiano();

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    void mudaRotacaoX(int angulo);
    void mudaRotacaoY(int angulo);
    void mudaRotacaoZ(int angulo);

public slots:
    void setRotacaoX(int angulo);
    void setRotacaoY(int angulo);
    void setRotacaoZ(int angulo);

private:
    void draw();

    int eixoX;
    int eixoY;
    int eixoZ;

    QPoint ultimaPosicao;

};

#endif // PLANOCARTESIANO_H
