#include "Arbol.h"

Arbol::Arbol()
{
        if (!objmodel_ptr)
        {
            objmodel_ptr = glmReadOBJ("mountain.obj");
        }
        if (!objmodel_ptr)
            exit(0);

        glmUnitize(objmodel_ptr);
        glmFacetNormals(objmodel_ptr);
        glmVertexNormals(objmodel_ptr, 90.0);

        if (!objmodel_ptr1)
        {

            objmodel_ptr1 = glmReadOBJ("nikto.obj");
        }
        if (!objmodel_ptr1)
            exit(0);

        glmUnitize(objmodel_ptr1);
        glmFacetNormals(objmodel_ptr1);
        glmVertexNormals(objmodel_ptr1, 90.0);

        if (!objmodel_ptr2)
        {

            objmodel_ptr2 = glmReadOBJ("tree.obj");
        }
        if (!objmodel_ptr2)
            exit(0);

        glmUnitize(objmodel_ptr2);
        glmFacetNormals(objmodel_ptr2);
        glmVertexNormals(objmodel_ptr2, 90.0);

        if (!objmodel_ptr3)
        {

            objmodel_ptr3 = glmReadOBJ("windmill.obj");
        }
        if (!objmodel_ptr3)
            exit(0);

        glmUnitize(objmodel_ptr3);
        glmFacetNormals(objmodel_ptr3);
        glmVertexNormals(objmodel_ptr3, 90.0);

        if (!objmodel_ptr4)
        {

            objmodel_ptr4 = glmReadOBJ("horse.obj");
        }
        if (!objmodel_ptr4)
            exit(0);

        glmUnitize(objmodel_ptr4);
        glmFacetNormals(objmodel_ptr4);
        glmVertexNormals(objmodel_ptr4, 90.0);
} 

void Arbol::DibujarArbol(int i, float ax, float ay, float az)
{
    glPushMatrix();
    glTranslatef(ax, ay, az);
    glRotatef(90, 0, 1, 0);
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL);
        glRotatef(-90, 0, 1, 0);
        glTranslatef(3.0, ay, az);
        glRotatef(90, 0, 1, 0);
        glmDraw(objmodel_ptr1, GLM_SMOOTH | GLM_MATERIAL);
        glRotatef(-90, 0, 1, 0);
        glTranslatef(-6.0, ay, az);
        glmDraw(objmodel_ptr2, GLM_SMOOTH | GLM_MATERIAL);
        glTranslatef(3.0, -3.0, az);
        glRotatef(90, 0, 1, 0);
        glmDraw(objmodel_ptr3, GLM_SMOOTH | GLM_MATERIAL);
        glRotatef(-90, 0, 1, 0);
        glTranslatef(ax, 6.0, az);
        glRotatef(90, 0, 1, 0);
        glmDraw(objmodel_ptr4, GLM_SMOOTH | GLM_MATERIAL);
        glRotatef(-90, 0, 1, 0);

        
    glPopMatrix();
}

Arbol::~Arbol()
{

}
