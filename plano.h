#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include "glm/glm.h"
#define NUM_MALLAS 6

class plano
{
	GLMmodel* objmodel_ptr = NULL;

public:
	plano();

	void dibujarPlano(int i, float ax, float ay, float az);

	~plano();
};

