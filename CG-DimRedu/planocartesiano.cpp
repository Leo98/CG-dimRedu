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

QSize PlanoCartesiano::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize PlanoCartesiano::sizeHint() const
{
    return QSize(400, 400);

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
    glColor3d(255,0,0);
        glBegin(GL_QUADS);
            glNormal3f(0,0,-1);
            glVertex3f(-1,-1,0);
            glVertex3f(-1,1,0);
            glVertex3f(1,1,0);
            glVertex3f(1,-1,0);

        glEnd();
        glBegin(GL_TRIANGLES);
            glNormal3f(0,-1,0.707);
            glVertex3f(-1,-1,0);
            glVertex3f(1,-1,0);
            glVertex3f(0,0,1.2);
        glEnd();
        glBegin(GL_TRIANGLES);
            glNormal3f(1,0, 0.707);
            glVertex3f(1,-1,0);
            glVertex3f(1,1,0);
            glVertex3f(0,0,1.2);
        glEnd();
        glBegin(GL_TRIANGLES);
            glNormal3f(0,1,0.707);
            glVertex3f(1,1,0);
            glVertex3f(-1,1,0);
            glVertex3f(0,0,1.2);
        glEnd();
        glBegin(GL_TRIANGLES);
            glNormal3f(-1,0,0.707);
            glVertex3f(-1,1,0);
            glVertex3f(-1,-1,0);
            glVertex3f(0,0,1.2);
        glEnd();

}

