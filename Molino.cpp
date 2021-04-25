#include "Molino.h"

Molino::Molino()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("windmill.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}
void Molino::DibujarMolino(int i, float ax, float ay, float az)
{
    //MOLINO
    glPushMatrix();
        glScalef(1.15f, 1.15f, 1.15f);
        glTranslatef(-3.0f, -1.25f, az);
        glRotatef(90, 0, 1, 0);
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();    

    
}

Molino::~Molino()
{

}