#include "Caballo.h"

Caballo::Caballo()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("horse.obj");
        //objmodel_ptr = glmReadOBJ("quijote_caballo.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}

void Caballo::DibujarCaballo(int i, float ax, float ay, float az)
{
    //CABALLERO
    glPushMatrix();
    glScalef(0.5f, 0.5f, 0.5f);
    glTranslatef(0.0f, -3.7f, az);
    glRotatef(90, 0, 1, 0);
    glRotatef(180, 0, 1, 0);
    glTranslatef(-10.0f, 0.0f, 0.0f);
    glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Caballo::~Caballo()
{

}