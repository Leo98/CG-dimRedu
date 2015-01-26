#include "planocartesiano.h"
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QColor>
#include <QtOpenGL>

PlanoCartesiano::PlanoCartesiano(QWidget *parent) : QOpenGLWidget(parent)
{
    eixoX = eixoY = eixoZ = 0;
}

PlanoCartesiano::~PlanoCartesiano()
{
}

void PlanoCartesiano::initializeGL()
{
    glClearColor(255,255,255,255);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    static GLfloat lightPosition[4] = { 0, 0, 10, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

}

void PlanoCartesiano::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);
    glRotatef(eixoX / 16.0, 1.0, 0.0, 0.0);
    glRotatef(eixoY / 16.0, 0.0, 1.0, 0.0);
    glRotatef(eixoZ / 16.0, 0.0, 0.0, 1.0);
    draw();

}

void PlanoCartesiano::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
#ifdef QT_OPENGL_ES_1
    glOrthof(-2, +2, -2, +2, 1.0, 15.0);
#else
    glOrtho(-2, +2, -2, +2, 1.0, 15.0);
#endif
    glMatrixMode(GL_MODELVIEW);

}

void PlanoCartesiano::mousePressEvent(QMouseEvent *event)
{
    ultimaPosicao = event->pos();

}

void PlanoCartesiano::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - ultimaPosicao.x();
    int dy = event->y() - ultimaPosicao.y();

    if (event->buttons() & Qt::LeftButton) {
        setRotacaoX(eixoX + 8 * dy);
        setRotacaoY(eixoY + 8 * dx);
    } else if (event->buttons() & Qt::RightButton) {
        setRotacaoX(eixoX + 8 * dy);
        setRotacaoZ(eixoZ + 8 * dx);
    }

    ultimaPosicao = event->pos();
}

static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
           angle += 360 * 16;
       while (angle > 360)
           angle -= 360 * 16;
}

void PlanoCartesiano::setRotacaoX(int angulo)
{
    qNormalizeAngle(angulo);
        if (angulo != eixoX) {
            eixoX = angulo;
            emit mudaRotacaoX(angulo);
            update();
        }

}

void PlanoCartesiano::setRotacaoY(int angulo)
{
    qNormalizeAngle(angulo);
        if (angulo != eixoY) {
            eixoY = angulo;
            emit mudaRotacaoY(angulo);
            update();
        }
}

void PlanoCartesiano::setRotacaoZ(int angulo)
{
    qNormalizeAngle(angulo);
        if (angulo != eixoZ) {
            eixoZ = angulo;
            emit mudaRotacaoZ(angulo);
            update();
        }
}

void PlanoCartesiano::draw()
{
    //eixo X
    glBegin(GL_LINES);
        glVertex3f(0,0,0);
        glVertex3f(1,0,0);
    glEnd();
    for(float x = 0.2; x<=1; x+=0.2)
    {
        glBegin(GL_LINES);
            glVertex3f(x, 0, 0);
            glVertex3f(x, 0.02, 0);
        glEnd();
        glBegin(GL_LINES);
            glVertex3f(x, 0, 0);
            glVertex3f(x, 0, 0.02);
        glEnd();
    }
    //eixo Y
    glBegin(GL_LINES);
        glVertex3f(0,0,0);
        glVertex3f(0,1,0);
    glEnd();
    for(float y = 0.2; y<=1; y+=0.2)
    {
        glBegin(GL_LINES);
            glVertex3f(0, y, 0);
            glVertex3f(0.02, y, 0);
        glEnd();
        glBegin(GL_LINES);
            glVertex3f(0, y, 0);
            glVertex3f(0, y, 0.02);
        glEnd();
    }
    //eixo Z
    glBegin(GL_LINES);
        glVertex3f(0,0,0);
        glVertex3f(0,0,1);
    glEnd();
    for(float z = 0.2; z<=1; z+=0.2)
    {
        glBegin(GL_LINES);
            glVertex3f(0, 0, z);
            glVertex3f(0, 0.02, z);
        glEnd();
        glBegin(GL_LINES);
            glVertex3f(0, 0, z);
            glVertex3f(0.02, 0, z);
        glEnd();
    }

    //Points
    glBegin(GL_POINTS);
        glVertex3f(1,1,1);
        glVertex3f(1, 5, 3);
        glVertex3f(3,2,8);
    glEnd();

}

