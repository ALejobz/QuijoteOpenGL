#include "Nube.h"
Nube::Nube()
{
    if (!objmodel_ptr)
    {
        objmodel_ptr = glmReadOBJ("nube.obj");
    }
    if (!objmodel_ptr)
        exit(0);

    glmUnitize(objmodel_ptr);
    glmFacetNormals(objmodel_ptr);
    glmVertexNormals(objmodel_ptr, 90.0);
}
void Nube::DibujarNube(int i, float ax, float ay, float az)
{
    //NUBE 1
    glPushMatrix();
        glTranslatef(ax, ay, az); //nube 1 ---- > -4.0f, 3.0f, az
                                  //nube 2 ---- > 4.0f, 3.0f, az
        glmDraw(objmodel_ptr, GLM_SMOOTH | GLM_MATERIAL | GLM_TEXTURE); //| GLM_TEXTURE no quizo cargar nunca la textura jpg
    glPopMatrix();
}
Nube::~Nube()
{

}