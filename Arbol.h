#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include "glm/glm.h"
#define NUM_MALLAS 6
class Arbol
{
	GLMmodel* objmodel_ptr = NULL;
	GLMmodel* objmodel_ptr1 = NULL;
	GLMmodel* objmodel_ptr2 = NULL;
	GLMmodel* objmodel_ptr3 = NULL;
	GLMmodel* objmodel_ptr4 = NULL;
	GLMmodel* objmodel_ptr5 = NULL;
	GLMmodel* objmodel_ptr6 = NULL;
	
public:
	Arbol();

	void DibujarArbol(int i, float ax, float ay, float az);

	~Arbol();
};

