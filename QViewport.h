#pragma once

#include <QOpenGLWidget.h>
#include <qopenglshaderprogram.h>
#include <string>

using namespace std;

struct Vertecies {
	float x, y, z;
	Vertecies::Vertecies() { x = 0.0; y = 0.0; z = 0.0; }
};

struct Polygons {
	int a, b, c = 0;
	Polygons::Polygons() { a = 0; b = 0; c = 0; }
};

struct Coordinates {
	float u, v;
	Coordinates::Coordinates() { u = 0.0; v = 0.0; }
};

struct Ambient {
	float r, g, b, a = 0;
	Ambient::Ambient() { r = 0.0; g = 0.0; b = 0.0; a = 1.0; }
};

struct Diffuse {
	float r, g, b, a = 0;
	Diffuse::Diffuse() { r = 0.0; g = 0.0; b = 0.0; a = 1.0; }
};

struct Specular {
	float r, g, b, a = 0;
	Specular::Specular() { r = 0.0; g = 0.0; b = 0.0; a = 1.0; }
};

//struct Material {
//	float r, g, b = 0;
//	Material::Material() { r = 0.0; g = 0.0; b = 0.0; }
//};

struct LightLocation {
	int x, y, z, d = 0;	//4th value is pointlight or directional light
	LightLocation::LightLocation() { x = 0; y = 0; z = 0; d = 0; }
};

class QViewport : public QOpenGLWidget {
	Q_OBJECT

public:
	QViewport(QWidget *parent);
	virtual ~QViewport();

	void initializeGL();
	void paintGL();
	void resizeGL(int width, int height);
	void read3DS(string fileName);
	void setShader();
	char* textFileRead(char *fn);
	void printShaderInfoLog(GLuint obj);
	void printProgramInfoLog(GLuint obj);
	void exampleShader();
	void clear();

	int xSlider;
	int ySlider;
	int zSlider;

	int xZoom, yZoom, zZoom;

	//---Model vertices, polygon, and mapping below
	string modelName;
	int vertices_qty;
	int polygons_qty;
	Vertecies vertex[20000];
	Polygons polygon[40000];
	Coordinates mapcoord[20000];
	bool isRendered;

	//---Lighting information about current model
	int lightSelected;
	bool isPointLight[3];
	bool isLightEnabled[3];
	LightLocation lightCoord[3];
	Ambient ambLight[3];
	Diffuse difLight[3];
	Specular specLight[3];
	
	//---Material information about current model
	Ambient ambMat;
	Diffuse difMat;
	Specular specMat;
	int shiny;

	//---Shader information about current model
	bool isShaderOn;
	string shaderName;
	GLint loc;
	GLuint v, f, f2, p;
private:


};