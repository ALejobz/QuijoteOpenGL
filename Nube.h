#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include "glm/glm.h"
class Nube
{
	GLMmodel* objmodel_ptr = NULL;

public:
	Nube();

	void DibujarNube(int i, float ax, float ay, float az);

	~Nube();
};

