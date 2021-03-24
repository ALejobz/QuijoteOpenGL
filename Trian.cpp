#include "Trian.h"

Trian::Trian()
{

}

void Trian::DibujarTrian()
{
    glPushMatrix();
        glTranslatef(0.0f, 3.0f, 0.0f);
        glBegin(GL_TRIANGLES);
            glVertex3f(1.5, 0, 0);
            glVertex3f(-1.5, 0, 0);
            glVertex3f(0, 2.6, 0);
        glEnd();

    glPopMatrix();
}

Trian::~Trian()
{

}