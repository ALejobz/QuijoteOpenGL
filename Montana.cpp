#include "Montana.h"

Montana::Montana()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("Mountain.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}

void Montana::DibujarMontana(int i, float ax, float ay, float az)
{
    //MONTANA
    glPushMatrix();
        glScalef(10.0f, 10.0f, 10.0f);
        glTranslatef(ax, ay, -9);
        //glTranslatef(ax, ay, 3.0);
        glRotatef(90, 0, 1, 0);
        glRotatef(-90, 1, 0, 0);
        glScalef(2, 2, 2);
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Montana::~Montana()
{

}