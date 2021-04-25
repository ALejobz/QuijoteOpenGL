#include "Arbol.h"

Arbol::Arbol()
{
    if (!objmodel_ptr2)
    {
        objmodel_ptr2 = glmReadOBJ("tree.obj");
    }
    if (!objmodel_ptr2)
        exit(0);

    glmUnitize(objmodel_ptr2);
    glmFacetNormals(objmodel_ptr2);
    glmVertexNormals(objmodel_ptr2, 90.0);
}

void Arbol::DibujarArbol(int i, float ax, float ay, float az)
{
    //ARBOL
    glPushMatrix();
        glTranslatef(ax, ay, az);
        glRotatef(20, 1, 1, 0);
        glmDraw(objmodel_ptr2, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Arbol::~Arbol()
{

}
