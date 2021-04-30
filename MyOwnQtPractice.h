#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyOwnQtPractice.h"


class MyOwnQtPractice : public QMainWindow
{
    Q_OBJECT

public:
    MyOwnQtPractice(QWidget *parent = Q_NULLPTR);

public slots:
	void xChangeLevel(int val);
	void yChangeLevel(int val);
	void zChangeLevel(int val);
	void generateMeshFromFile();	//deprecated, keeping it for you tobby
	void generateMeshFromFile(QString name);
	void clear();
	void updateAmbient(int val);
	void updateSpecular(int val);
	void updateDiffuse(int val);
	void toggleLightDistance();
	void toggleEnableLight();
	void selectLight(QString name);
	void updateLightCoord(int val);
	void updateShiny(int val);
	void updateCamCoord(int val);
	void selectShader();

private:
    Ui::MyOwnQtPracticeClass ui;
};
