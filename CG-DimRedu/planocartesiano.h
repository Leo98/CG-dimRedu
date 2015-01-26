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

    QSize minimumSizeHint() const;
    QSize sizeHint() const;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

signals:
    //sinais para rotação a partir do movimento do mouse
    void mudaRotacaoX(int angulo);
    void mudaRotacaoY(int angulo);
    void mudaRotacaoZ(int angulo);

public slots:
    // slots para a rotação xyz no slider
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
