#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include "glm/glm.h"
#define NUM_MALLAS 6
class Molino
{

	GLMmodel* objmodel_ptr = NULL;

public:
	Molino();

	void DibujarMolino(int i, float ax, float ay, float az);

	~Molino();
};

