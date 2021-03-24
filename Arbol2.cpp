#include "Arbol2.h"

Arbol2::Arbol2()
{

}

void Arbol2::DibujarArbol2()
{
	glPushMatrix();

	//Copa arbol
	glPushMatrix();
	glTranslatef(0.0f, -2.5f, 0.0f);
	glutSolidIcosahedron();
	glPopMatrix();

	//Tronco
	glPushMatrix();
	glTranslatef(0.0f, -3.0f, 0.0f);
	glRotatef(90, 1, 0, 0);
	
	glutSolidCylinder(0.5f, 1.0f, 20, 20);
	glPopMatrix();


	glPopMatrix();
}

Arbol2::~Arbol2()
{

}