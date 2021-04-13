#include "QViewport.h"
#include "OpenGL.h"

#include <iostream>
#include <cstdio>	//reading chunks, opening file
#include <stdio.h>	//fileno
#include <io.h>

QViewport::QViewport(QWidget *parent) {
	this->xSlider = 0;
	this->ySlider = 0;
	this->zSlider = 0;
	this->vertices_qty = 0;
	this->polygons_qty = 0;
	this->modelName = "";
	this->isRendered = false;
	for (int i = 0; i < 3; ++i) {
		this->isPointLight[i] = true;
		this->isLightEnabled[i] = false;
	}
	this->lightSelected = 0;	//this will be the index for the light arrays
}
QViewport::~QViewport() {

}

void QViewport::initializeGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void QViewport::paintGL() {
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	//gluLookAt(GLfloat(xSlider), GLfloat(ySlider), GLfloat(zSlider), 0.0f, 0.0f, 0.0f, 0.0f, cos(ySlider), 0.0f);
	gluLookAt(GLfloat(xSlider), GLfloat(ySlider), GLfloat(zSlider), 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
	//gluLookAt(0.0f, 0.0f, 0.0f, GLfloat(xSlider), GLfloat(ySlider), GLfloat(zSlider), 0.0f, 1.0f, 0.0f); //<--I can kind of see a cup with this
	glBindTexture(GL_TEXTURE_2D, 1);

	if (isLightEnabled[lightSelected]) {

		switch (lightSelected) {

		}
		GLfloat ambient[] = { ambLight.r, ambLight.g, ambLight.b, ambLight.a };
		GLfloat diffuse[] = { difLight.r, difLight.g, difLight.b, difLight.a };
		GLfloat specular[] = { specLight.r, specLight.g, specLight.b, 1 - specLight.a };
		GLfloat position[] = { -22.0, 22.0, 22.0, (int)isPointLight[lightSelected] };	//0 value for the last argument means infinite distance away
		glLightfv(GL_LIGHT0 + lightSelected, GL_POSITION, position);

		glLightfv(GL_LIGHT0 + lightSelected, GL_AMBIENT, ambient);
		glLightfv(GL_LIGHT0 + lightSelected, GL_DIFFUSE, diffuse);
		glLightfv(GL_LIGHT0 + lightSelected, GL_SPECULAR, specular);


		glMaterialfv(GL_FRONT, GL_AMBIENT, ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
		glMaterialf(GL_FRONT, GL_SHININESS, 1.0f);
	}

	glBegin(GL_TRIANGLES);
		glColor3f(1.0f, 0.0f, 0.0f);	//this will be cancelled due to the lighting
		for (int i = 0; i < polygons_qty; ++i) {
			glTexCoord2f(mapcoord[polygon[i].a].u, mapcoord[polygon[i].a].v);
			glVertex3f(vertex[polygon[i].a].x, vertex[polygon[i].a].y, vertex[polygon[i].a].z);

			glTexCoord2f(mapcoord[polygon[i].b].u, mapcoord[polygon[i].b].v);
			glVertex3f(vertex[polygon[i].b].x, vertex[polygon[i].b].y, vertex[polygon[i].b].z);

			glTexCoord2f(mapcoord[polygon[i].c].u, mapcoord[polygon[i].c].v);
			glVertex3f(vertex[polygon[i].c].x, vertex[polygon[i].c].y, vertex[polygon[i].c].z);
		}
	glEnd();
	glPopMatrix();
}

void QViewport::resizeGL(int width, int height) {
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluPerspective(150.0, float(width) / float(height), 0.01, 300.0f);	<--- much better perspective for cup and spoon
	gluPerspective(65.0, float(width) / float(height), 0.01, 300.0f);
	glMatrixMode(GL_MODELVIEW);
	glShadeModel(GL_SMOOTH);	//enables intensity reflected light at each polygon vertex and interpolates across polygon at each point
	//glEnable(GL_NORMALIZE);	//needed to enable normals for surfaces for lights
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_LIGHT2);
	glEnable(GL_LIGHTING);
}

void QViewport::read3DS(std::string fileName)
{
	// http://cse.ucdenver.edu/~mchoi/4565/Protected/Final/3ds.htm
	//					Offset  | Length
	//Chunk identifier: 0		|	2 bytes
	//Chunk Length:		2		|	4 bytes
	//Data:				6		|	n bytes
	//Sub-chunks:		6+n		|	m bytes
	FILE *modelFile;
	unsigned short identifier;	//2 bytes
	unsigned int length;	//4 bytes
	unsigned char l_char;
	unsigned short l_quantity; //Number of elements in each chunk
	unsigned short l_face_flags; //Flag that stores some face information
	char buf[20];	//no reason why I picked 20, this could cause issues
	if ((modelFile = fopen(fileName.c_str(), "rb")) == NULL)
		return;
	while (ftell(modelFile) < filelength (fileno(modelFile))) {
		fread(&identifier, 2, 1, modelFile);
		fread(&length, 4, 1, modelFile);
		//I would love to use a switch case but like https://stackoverflow.com/questions/3328451/why-i-cant-use-unsigned-short-in-switch-case
		if (identifier == 0x4d4d) {
			//we found the main chunk
			;
		}
		else if (identifier == 0x3d3d) {
			//3D editor chunk
			;
		}
		else if (identifier == 0x4000) {
			//Object chunk, sub chunks contain the name of the mesh
			int i = 0;
			do {
				fread(&l_char, 1, 1, modelFile);
				buf[i] = l_char;
				++i;
			} while (l_char != '\0' && i < 20);
			if(modelName == "")
				modelName = buf;
		}
		else if (identifier == 0x4100) {
			;
		}
		else if (identifier == 0x4110) {
			//Vertices chunk
			fread(&l_quantity, sizeof(unsigned short), 1, modelFile);
			vertices_qty = l_quantity;
			printf("Number of vertices: %d\n", l_quantity);
			for (int i = 0; i < l_quantity; i++)
			{
				fread(&vertex[i].x, sizeof(float), 1, modelFile);
				fread(&vertex[i].y, sizeof(float), 1, modelFile);
				fread(&vertex[i].z, sizeof(float), 1, modelFile);
			}
		}
		else if (identifier == 0x4120) {
			//Face chunk
			fread(&l_quantity, sizeof(unsigned short), 1, modelFile);
			polygons_qty = l_quantity;
			printf("Number of polygons: %d\n", l_quantity);
			for (int i = 0; i < l_quantity; i++)
			{
				fread(&polygon[i].a, sizeof(unsigned short), 1, modelFile);
				fread(&polygon[i].b, sizeof(unsigned short), 1, modelFile);
				fread(&polygon[i].c, sizeof(unsigned short), 1, modelFile);
				fread(&l_face_flags, sizeof(unsigned short), 1, modelFile);
			}
		}
		else if (identifier == 0x4140) {
			//mapping chunk
			fread(&l_quantity, sizeof(unsigned short), 1, modelFile);
			printf("Number of map coordinates: %d\n", l_quantity);
			for (int i = 0; i < l_quantity; i++)
			{
				fread(&mapcoord[i].u, sizeof(float), 1, modelFile);
				fread(&mapcoord[i].v, sizeof(float), 1, modelFile);
			}
		}
		else {
			//I don't even know who this chunk is
			fseek(modelFile, length - 6, SEEK_CUR);
		}
	}
	fclose(modelFile);
	return;
}

void QViewport::clear()
{
	this->vertices_qty = 0;
	this->polygons_qty = 0;
	this->modelName = "";
	this->isRendered = false;
	for (int i = 0; i < 3; ++i) {
		this->isPointLight[i] = true;
		this->isLightEnabled[i] = false;
	}
	for (int i = 0; i < 40000; ++i) {
		if (i < 20000) {
			vertex[i].x = vertex[i].y = vertex[i].z = 0.0;
			mapcoord[i].u = mapcoord[i].v = 0.0;
		}
		polygon[i].a = polygon[i].b = polygon[i].c = 0.0;
	}
}

