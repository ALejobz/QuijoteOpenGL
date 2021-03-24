#include "Tetera.h"

Tetera::Tetera()
{

}

void Tetera::DibujarTetera()
{
    glPushMatrix();
        glTranslatef(3.0f, 0.0f, 0.0f);
        glRotatef(180, 0, 1, 0);
        glutSolidTeapot(0.5);
    glPopMatrix();
}

Tetera::~Tetera()
{

}
