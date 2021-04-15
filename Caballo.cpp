#include "Caballo.h"

Caballo::Caballo()
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

void Caballo::DibujarCaballo(int i, float ax, float ay, float az)
{
    //CABALLO
    glPushMatrix();
        glScalef(0.5f, 0.5f, 0.5f);
        glTranslatef(-8.25f, -3.7f, az);
        glRotatef(90, 0, 1, 0);
        glRotatef(180, 0, 1, 0);
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Caballo::~Caballo()
{

}