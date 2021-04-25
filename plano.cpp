#include "plano.h"

plano::plano()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("plano.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}

void plano::dibujarPlano(int i, float ax, float ay, float az)
{
    //PLANO
    glPushMatrix();
    glScalef(0.4f, 0.4f, 0.4f);
    glTranslatef(-12.5f, -6.0f, az);
    glRotatef(180, 1, 0, 0);
    glScalef(200.0f, 200.0f, 200.0f);
    glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

plano::~plano()
{

}