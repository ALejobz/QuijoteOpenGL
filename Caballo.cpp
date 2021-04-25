#include "Caballo.h"

Caballo::Caballo()
{
    if (!objmodel_ptr2)
    {
        objmodel_ptr2 = glmReadOBJ("plano.obj");
    }
    if (!objmodel_ptr2)
        exit(0);

    glmUnitize(objmodel_ptr2);
    glmFacetNormals(objmodel_ptr2);
    glmVertexNormals(objmodel_ptr2, 90.0);
}

void Caballo::DibujarCaballo(int i, float ax, float ay, float az)
{
    //CABALLO
    glPushMatrix();
        //glScalef(0.5f, 0.5f, 0.5f);
        //glTranslatef(-3.0f, -3.7f, az);
        //glRotatef(90, 0, 1, 0);
        //glRotatef(180, 0, 1, 0);
        glmDraw(objmodel_ptr2, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Caballo::~Caballo()
{

}