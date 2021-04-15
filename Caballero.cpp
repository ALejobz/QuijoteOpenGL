#include "Caballero.h"

Caballero::Caballero()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("nikto.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}

void Caballero::DibujarCaballero(int i, float ax, float ay, float az)
{
    //CABALLERO
    glPushMatrix();
        glScalef(0.4f, 0.4f, 0.4f);
        glTranslatef(-12.5f, -5.0f, az);
        glRotatef(-90, 1, 0, 0);
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Caballero::~Caballero()
{

}