#include "Caballo2.h"

Caballo2::Caballo2()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("horse.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}

void Caballo2::DibujarCaballo2(int i, float ax, float ay, float az)
{
    //CABALLERO
    glPushMatrix();
        glScalef(0.5f, 0.5f, 0.5f);
        glTranslatef(0.0f, -3.7f, az);
        glRotatef(90, 0, 1, 0);
        glRotatef(180, 0, 1, 0);
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Caballo2::~Caballo2()
{

}