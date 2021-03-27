#include "Arbol.h"

Arbol::Arbol()
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

    //CABALLERO
    glPushMatrix();
        glScalef(0.4f, 0.4f, 0.4f);
        glTranslatef(-12.5f, -5.0f, az);
        glRotatef(-90, 1, 0, 0);
        glmDraw(objmodel_ptr1, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();

    //ARBOL
    glPushMatrix();
        glTranslatef(-3.0f, -1.3f, az);
        glmDraw(objmodel_ptr2, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();

    //MOLINO
    glPushMatrix();
        glScalef(1.15f, 1.15f, 1.15f);
        glTranslatef(-6.0f, -1.25f, az);
        glRotatef(90, 0, 1, 0);
        glmDraw(objmodel_ptr3, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();

    //CABALLO
    glPushMatrix();
        glScalef(0.5f, 0.5f, 0.5f);
        glTranslatef(-8.25f, -3.7f, az);
        glRotatef(90, 0, 1, 0);
        glRotatef(180, 0, 1, 0);
        glmDraw(objmodel_ptr4, GLM_SMOOTH | GLM_MATERIAL);
    glPopMatrix();
}

Arbol::~Arbol()
{

}
