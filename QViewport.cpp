#include <iostream>
#include <cstdio>	//reading chunks, opening file
#include <stdio.h>	//fileno
#include <io.h>
#include <GL/glew.h>

#include "QViewport.h"
#include "OpenGL.h"

#define highp
#define mediump
#define lowp

QViewport::QViewport(QWidget *parent) {
	this->xSlider = 0;
	this->ySlider = 0;
	this->zSlider = 0;
	this->vertices_qty = 0;
	this->polygons_qty = 0;
	this->xZoom = 0;
	this->yZoom = 0;
	this->zZoom = -200;
	this->shiny = 1;
	this->modelName = "";
	this->shaderName = "";
	this->isRendered = false;
	this->isShaderOn = false;
	for (int i = 0; i < 3; ++i) {
		this->isPointLight[i] = true;
		this->isLightEnabled[i] = false;
		this->lightCoord[i].x = -22;
		this->lightCoord[i].y = 22;
		this->lightCoord[i].z = 22;
		this->lightCoord[i].d = 1;
	}
	this->lightSelected = 0;	//this will be the index for the light arrays
	
}
QViewport::~QViewport() {

}

void QViewport::initializeGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	glShadeModel(GL_SMOOTH);	//enables intensity reflected light at each polygon vertex and interpolates across polygon at each point	
	//https://community.khronos.org/t/shininess/18327/10
	//glEnable(GL_COLOR_MATERIAL);
	//glColorMaterial(GL_FRONT, GL_SPECULAR);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	glFrontFace(GL_CCW);
	glEnable(GL_AUTO_NORMAL);
	glEnable(GL_NORMALIZE);	//needed to enable normals for surfaces for lights

	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_LIGHT2);
	glEnable(GL_LIGHTING);

	glewInit();
	if (glewIsSupported("GL_VERSION_2_0"))
		cout << "Ready for OpenGL 2.0\n";
	else {
		cout << "OpenGL 2.0 not supported\n";
	}

	this->setShader();
}

void QViewport::paintGL() {
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	//gluLookAt(GLfloat(xSlider), GLfloat(ySlider), GLfloat(zSlider), 0.0f, 0.0f, 0.0f, 0.0f, cos(ySlider*0.001), 0.0f);
	gluLookAt(xZoom, yZoom, zZoom, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
	glRotatef(GLfloat(xSlider), 1, 0, 0);
	glRotatef(GLfloat(ySlider), 0, 1, 0);
	glRotatef(GLfloat(zSlider), 0, 0, 1);
	glBindTexture(GL_TEXTURE_2D, 1);

	for (int i = 0; i < 3; ++i) {
		if (isLightEnabled[i]) {
			glEnable(GL_LIGHT0 + i);
			GLfloat ambientLight[] = { ambLight[i].r, ambLight[i].g, ambLight[i].b, ambLight[i].a };
			GLfloat diffuseLight[] = { difLight[i].r, difLight[i].g, difLight[i].b, difLight[i].a };
			GLfloat specularLight[] = { specLight[i].r, specLight[i].g, specLight[i].b, specLight[i].a };

			GLfloat positionLight[] = { lightCoord[i].x, lightCoord[i].y, lightCoord[i].z, (int)isPointLight[i] };	//0 value for the last argument means infinite distance away
			glLightfv(GL_LIGHT0 + i, GL_POSITION, positionLight);

			glLightfv(GL_LIGHT0 + i, GL_AMBIENT, ambientLight);
			glLightfv(GL_LIGHT0 + i, GL_DIFFUSE, diffuseLight);
			glLightfv(GL_LIGHT0 + i, GL_SPECULAR, specularLight);

			GLfloat ambientMat[] = { ambMat.r, ambMat.g, ambMat.b, ambMat.a };
			GLfloat diffuseMat[] = { difMat.r, difMat.g, difMat.b, difMat.a };
			GLfloat specularMat[] = { specMat.r, specMat.g, specMat.b, specMat.a };

			glMaterialfv(GL_FRONT, GL_AMBIENT, ambientMat);
			glMaterialfv(GL_FRONT, GL_DIFFUSE, diffuseMat);
			glMaterialfv(GL_FRONT, GL_SPECULAR, specularMat);
			glMaterialf(GL_FRONT, GL_SHININESS, GLfloat(shiny));
		}
		else {
			glDisable(GL_LIGHT0 + i);
		}
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

	if (this->isShaderOn) {
		cout << "Turning on shader\n";
		glUseProgram(this->p);
		//this->setShader();
	}
	else
	{
		cout << "Shader off\n";
		glUseProgram(0);	//https://stackoverflow.com/questions/13546461/what-does-gluseprogram0-do
	}

	glPopMatrix();
}

void QViewport::resizeGL(int width, int height) {
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluPerspective(150.0, float(width) / float(height), 0.01, 500.0f);
	gluPerspective(65.0, float(width) / float(height), 0.01, 1000.0f);
	glMatrixMode(GL_MODELVIEW);
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

void QViewport::setShader()
{
	char *vs = NULL, *fs = NULL, *fs2 = NULL;

	v = glCreateShader(GL_VERTEX_SHADER);
	f = glCreateShader(GL_FRAGMENT_SHADER);
	f2 = glCreateShader(GL_FRAGMENT_SHADER);

	vs = textFileRead("Shaders/toonf2.vert");
	fs = textFileRead("Shaders/toonf2.frag");

	const char * vv = vs;
	const char * ff = fs;

	glShaderSource(v, 1, &vv, NULL);
	glShaderSource(f, 1, &ff, NULL);

	free(vs); free(fs);

	glCompileShader(v);
	glCompileShader(f);

	printShaderInfoLog(v);
	printShaderInfoLog(f);
	printShaderInfoLog(f2);

	p = glCreateProgram();
	glAttachShader(p, v);
	glAttachShader(p, f);

	glLinkProgram(p);
	printProgramInfoLog(p);

	glUseProgram(p);
	loc = glGetUniformLocation(p, "time");
}

char* QViewport::textFileRead(char * fn)
{
	FILE *fp;
	char *content = NULL;

	std::size_t count = 0;

	if (fn != NULL) {
		fp = fopen(fn, "rt");

		if (fp != NULL) {

			fseek(fp, 0, SEEK_END);
			count = ftell(fp);
			rewind(fp);

			if (count > 0) {
				content = (char *)malloc(sizeof(char) * (count + 1));
				count = fread(content, sizeof(char), count, fp);
				content[count] = '\0';
			}
			fclose(fp);
		}
	}
	return content;
}

void QViewport::printShaderInfoLog(GLuint obj)
{
	int infologLength = 0;
	int charsWritten = 0;
	char *infoLog;

	glGetShaderiv(obj, GL_INFO_LOG_LENGTH, &infologLength);

	if (infologLength > 0)
	{
		infoLog = (char *)malloc(infologLength);
		glGetShaderInfoLog(obj, infologLength, &charsWritten, infoLog);
		printf("%s\n", infoLog);
		free(infoLog);
	}
}

void QViewport::printProgramInfoLog(GLuint obj)
{
	int infologLength = 0;
	int charsWritten = 0;
	char *infoLog;

	glGetProgramiv(obj, GL_INFO_LOG_LENGTH, &infologLength);

	if (infologLength > 0)
	{
		infoLog = (char *)malloc(infologLength);
		glGetProgramInfoLog(obj, infologLength, &charsWritten, infoLog);
		printf("%s\n", infoLog);
		free(infoLog);
	}
}

void QViewport::exampleShader()
{
	QOpenGLShader shader(QOpenGLShader::Vertex);
	QOpenGLShaderProgram program(this);	//a bit confused as to what needs to be inside this constructor
	program.addShaderFromSourceCode(QOpenGLShader::Vertex,
		"attribute highp vec4 vertex;\n"
		"uniform highp mat4 matrix;\n"
		"void main(void)\n"
		"{\n"
		"   gl_Position = matrix * vertex;\n"
		"}");
	program.addShaderFromSourceCode(QOpenGLShader::Fragment,
		"uniform mediump vec4 color;\n"
		"void main(void)\n"
		"{\n"
		"   gl_FragColor = color;\n"
		"}");
	//program.addShader(&shader);
	program.link();
	program.bind();
	int vertexLocation = program.attributeLocation("vertex");
	int matrixLocation = program.uniformLocation("matrix");
	int colorLocation = program.uniformLocation("color");

	static GLfloat const triangleVertices[] = {
	60.0f,  10.0f,  0.0f,
	110.0f, 110.0f, 0.0f,
	10.0f,  110.0f, 0.0f
	};

	QColor color(0, 255, 0, 255);

	QMatrix4x4 pmvMatrix;
	pmvMatrix.ortho(rect());

	program.enableAttributeArray(vertexLocation);
	program.setAttributeArray(vertexLocation, triangleVertices, 3);
	program.setUniformValue(matrixLocation, pmvMatrix);
	program.setUniformValue(colorLocation, color);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	program.disableAttributeArray(vertexLocation);
}

void QViewport::clear()
{
	this->vertices_qty = 0;
	this->polygons_qty = 0;
	this->xZoom = 0;
	this->yZoom = 0;
	this->zZoom = -200;
	this->modelName = "";
	this->isRendered = false;
	this->shiny = 1;
	for (int i = 0; i < 3; ++i) {
		this->isPointLight[i] = true;
		this->isLightEnabled[i] = false;
		this->lightCoord[i].x = -22;
		this->lightCoord[i].y = 22;
		this->lightCoord[i].z = 22;
		this->lightCoord[i].d = 1;
	}
	//TODO: Reset light and material values

	for (int i = 0; i < 40000; ++i) {
		if (i < 20000) {
			vertex[i].x = vertex[i].y = vertex[i].z = 0.0;
			mapcoord[i].u = mapcoord[i].v = 0.0;
		}
		polygon[i].a = polygon[i].b = polygon[i].c = 0.0;
	}
}

