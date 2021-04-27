#include "MyOwnQtPractice.h"
#include <iostream>

MyOwnQtPractice::MyOwnQtPractice(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	int index = this->ui.viewport->lightSelected;
	this->ui.xBoxLight->setValue(this->ui.viewport->lightCoord[index].x);
	this->ui.yBoxLight->setValue(this->ui.viewport->lightCoord[index].y);
	this->ui.zBoxLight->setValue(this->ui.viewport->lightCoord[index].z);

	this->ui.xBoxCam->setValue(this->ui.viewport->xZoom);
	this->ui.yBoxCam->setValue(this->ui.viewport->yZoom);
	this->ui.zBoxCam->setValue(this->ui.viewport->zZoom);
}

void MyOwnQtPractice::xChangeLevel(int val) {
	this->ui.viewport->xSlider = val;
	this->ui.viewport->update();
}

void MyOwnQtPractice::yChangeLevel(int val) {
	this->ui.viewport->ySlider = val;
	this->ui.viewport->update();
}

void MyOwnQtPractice::zChangeLevel(int val) {
	this->ui.viewport->zSlider = val;
	this->ui.viewport->update();
}

void MyOwnQtPractice::generateMeshFromFile()
{
	//this->ui.viewport->read3DS("Models/cup_2.3DS");
	this->ui.viewport->read3DS("Models/spoon.3ds"); 
	QString text = "Model Name: ";
	text.append(QString::fromStdString(this->ui.viewport->modelName));

	this->ui.ModelLabel->setText(text);
	this->ui.viewport->isRendered = true;
	this->ui.viewport->update();
}

void MyOwnQtPractice::generateMeshFromFile(QString name)
{
	//Check if a model is already rendered.
	if (this->ui.viewport->isRendered == true) {
		this->clear();
	}

	name = name.toLower();
	if (name == "cup") {
		//cup is quite massive and needs a different gluperspective
		this->ui.viewport->read3DS("Models/cup_2.3DS");
	}
	else if (name == "spoon") {
		this->ui.viewport->read3DS("Models/spoon.3ds");
	}
	else if (name == "blender") {
		this->ui.viewport->read3DS("Models/a3dblend.3ds");
	}
	else if (name == "cyph") {
		this->ui.viewport->read3DS("Models/aircyph.3ds");
	}
	else if (name == "hubble") {
		//hubble is quite massive and needs a different gluperspective
		this->ui.viewport->read3DS("Models/hst.3ds");
	}
	else if (name == "planet camera") {
		this->ui.viewport->read3DS("Models/wfpc2.3ds");
	}
	else if (name == "shovel") {
		this->ui.viewport->read3DS("Models/a3dshovl.3ds");
	}
	else if (name == "shuttle") {
		//shuttle is a bit tiny
		this->ui.viewport->read3DS("Models/shuttle.3ds");
	}
	else if (name == "wrench") {
		this->ui.viewport->read3DS("Models/tolcwrm1.3ds");
	}
	else if (name == "zepplin") {
		this->ui.viewport->read3DS("Models/Zepplin2.3ds");
	}
	
	QString text = "Model Name: ";
	text.append(QString::fromStdString(this->ui.viewport->modelName));

	this->ui.ModelLabel->setText(text);
	this->ui.viewport->isRendered = true;
	this->ui.viewport->update();
}

void MyOwnQtPractice::clear()
{
	this->ui.viewport->clear();
	//Reset model name text
	this->ui.ModelLabel->setText("Model Name: ");
	//Reset point light text
	int index = this->ui.viewport->lightSelected;	//index value
	this->ui.viewport->isPointLight[index] = !(this->ui.viewport->isPointLight[index]);
	QString text = "Point Light(";
	text.append(QString::number(index + 1));
	text.append(") = ");
	text.append(QVariant(this->ui.viewport->isPointLight[index]).toString());	//https://stackoverflow.com/questions/9604446/convert-bool-to-qstring
	this->ui.LightDistanceButton->setText(text);
	//Reset enabled/disabled text
	text = "Enable Light(";
	text.append(QString::number(index+1));
	text.append(")");
	this->ui.EnableLightButton->setText(text);
	//Reset shiny value box
	this->ui.ShinyBox->setValue(1);
	//TODO:Reset camera position
	//TODO:Reset dial position for light and material
	//TODO:Reset camera zoom label text

	this->ui.viewport->update();
}

void MyOwnQtPractice::updateAmbient(int val)
{
	//https://forum.qt.io/topic/2451/what-would-be-object-name-which-sends-event-solved
	QObject *pObject = sender();
	QString name = pObject->objectName();
	//val is between 0-99 so this makes it quite easy to map to 0.0-1.0
	float new_val = (float)val/99.0;	//+1 to avoid division by 0, mapping it between 0.00-1.00
	int index = this->ui.viewport->lightSelected;	//index value
	//It's either light or material ambient. Look at the starting character and ending character to figure it out
	QChar first = name.data()[0];
	QChar last = name.data()[name.size() - 1];
	if (first == 'L') {
		//change stuff for light
		if (last == 'R') {
			this->ui.viewport->ambLight[index].r = new_val;
		}
		else if (last == 'G') {
			this->ui.viewport->ambLight[index].g = new_val;
		}
		else if (last == 'B') {
			this->ui.viewport->ambLight[index].b = new_val;
		}
	}
	else if (first == 'M') {
		//change stuff for material
		if (last == 'R') {
			this->ui.viewport->ambMat.r = new_val;
		}
		else if (last == 'G') {
			this->ui.viewport->ambMat.g = new_val;
		}
		else if (last == 'B') {
			this->ui.viewport->ambMat.b = new_val;
		}
	}
	
	this->ui.viewport->update();
}

void MyOwnQtPractice::updateSpecular(int val)
{
	QObject *pObject = sender();
	QString name = pObject->objectName();
	//val is between 0-99 so this makes it quite easy to map to 0.0-1.0
	float new_val = (float)val / 99.0;	//+1 to avoid division by 0, mapping it between 0.00-1.00
	int index = this->ui.viewport->lightSelected;	//index value
	QChar first = name.data()[0];
	QChar last = name.data()[name.size() - 1];
	if (first == 'L') {
		if (last == 'R') {
			this->ui.viewport->specLight[index].r = new_val;
		}
		else if (last == 'G') {
			this->ui.viewport->specLight[index].g = new_val;
		}
		else if (last == 'B') {
			this->ui.viewport->specLight[index].b = new_val;
		}
	}
	else if (first == 'M') {
		if (last == 'R') {
			this->ui.viewport->specMat.r = new_val;
		}
		else if (last == 'G') {
			this->ui.viewport->specMat.g = new_val;
		}
		else if (last == 'B') {
			this->ui.viewport->specMat.b = new_val;
		}
	}
	
	this->ui.viewport->update();
}

void MyOwnQtPractice::updateDiffuse(int val)
{
	QObject *pObject = sender();
	QString name = pObject->objectName();
	//val is between 0-99 so this makes it quite easy to map to 0.0-1.0
	float new_val = (float)val / 99.0;	//+1 to avoid division by 0, mapping it between 0.00-1.00
	int index = this->ui.viewport->lightSelected;	//index value
	QChar first = name.data()[0];
	QChar last = name.data()[name.size() - 1];
	if (first == 'L') {
		if (last == 'R') {
			this->ui.viewport->difLight[index].r = new_val;
		}
		else if (last == 'G') {
			this->ui.viewport->difLight[index].g = new_val;
		}
		else if (last == 'B') {
			this->ui.viewport->difLight[index].b = new_val;
		}
	}
	else if (first == 'M') {
		if (last == 'R') {
			this->ui.viewport->difMat.r = new_val;
		}
		else if (last == 'G') {
			this->ui.viewport->difMat.g = new_val;
		}
		else if (last == 'B') {
			this->ui.viewport->difMat.b = new_val;
		}
	}
	
	this->ui.viewport->update();
}

void MyOwnQtPractice::toggleLightDistance()
{
	int index = this->ui.viewport->lightSelected;	//index value
	this->ui.viewport->isPointLight[index] = !(this->ui.viewport->isPointLight[index]);
	QString text = "Point Light(";
	text.append(QString::number(index+1));
	text.append(") = ");
	text.append(QVariant(this->ui.viewport->isPointLight[index]).toString());	//https://stackoverflow.com/questions/9604446/convert-bool-to-qstring
	this->ui.LightDistanceButton->setText(text);
	this->ui.viewport->update();
}

void MyOwnQtPractice::toggleEnableLight()
{
	int index = this->ui.viewport->lightSelected;
	this->ui.viewport->isLightEnabled[index] = !(this->ui.viewport->isLightEnabled[index]);
	//I could shorten the above 3 lines to this 1 line, but my god does it look ugly. 
	//But that's also beautiful how ugly it looks. But hey, future Anthony, I'll make it readable because I'm sure you'll read this again
	//this->ui.viewport->isLightEnabled[(this->ui.LightPicker->currentText().data()[currentLight.size() - 1]).digitValue() - 1] == !(this->ui.viewport->isLightEnabled[(this->ui.LightPicker->currentText().data()[currentLight.size() - 1]).digitValue() - 1]);
	QString text;
	if (this->ui.viewport->isLightEnabled[index]) {
		//change the text to the opposite now
		text = "Disable Light(";
	}
	else {
		text = "Enable Light(";
	}
	text.append(QString::number(index + 1));
	text.append(")");
	this->ui.EnableLightButton->setText(text);
	this->ui.viewport->update();
}

void MyOwnQtPractice::selectLight(QString name)
{
	int number = (name.data()[name.size() - 1]).digitValue();
	int index = number - 1;
	this->ui.viewport->lightSelected = index;	//it's an index, not the number in the name
	//update label for toggleLight and toggleDistance
	QString text;
	if (this->ui.viewport->isLightEnabled[index])
		text = "Disable Light(";
	else
		text = "Enable Light(";
	text.append(QString::number(number));
	text.append(")");
	this->ui.EnableLightButton->setText(text);
	text = "Point Light(";
	text.append(QString::number(number));
	text.append(") = ");
	text.append(QVariant(this->ui.viewport->isPointLight[index]).toString());
	this->ui.LightDistanceButton->setText(text);
	//Now update light coordinates labels
	this->ui.xBoxLight->setValue(this->ui.viewport->lightCoord[index].x);
	this->ui.yBoxLight->setValue(this->ui.viewport->lightCoord[index].y);
	this->ui.zBoxLight->setValue(this->ui.viewport->lightCoord[index].z);
	//Now update the dials to their correct value based on the current light ambient/diffuse/specular of the current light
	float r, g, b;
	//RGB values are stored between 0.00-1.00 so we need to map it back to 100
	r = this->ui.viewport->ambLight[index].r;
	g = this->ui.viewport->ambLight[index].g;
	b = this->ui.viewport->ambLight[index].b;
	this->ui.LightAmbR->setValue(int(r * 100));
	this->ui.LightAmbG->setValue(int(g * 100));
	this->ui.LightAmbB->setValue(int(b * 100));

	r = this->ui.viewport->difLight[index].r;
	g = this->ui.viewport->difLight[index].g;
	b = this->ui.viewport->difLight[index].b;
	this->ui.LightDiffR->setValue(int(r * 100));
	this->ui.LightDiffG->setValue(int(g * 100));
	this->ui.LightDiffB->setValue(int(b * 100));

	r = this->ui.viewport->specLight[index].r;
	g = this->ui.viewport->specLight[index].g;
	b = this->ui.viewport->specLight[index].b;
	this->ui.LightSpecR->setValue(int(r * 100));
	this->ui.LightSpecG->setValue(int(g * 100));
	this->ui.LightSpecB->setValue(int(b * 100));
	this->ui.viewport->update();
}

void MyOwnQtPractice::updateLightCoord(int val)
{
	QObject *pObject = sender();
	QString name = pObject->objectName();
	int index = this->ui.viewport->lightSelected;
	if (name == "xBoxLight") {
		this->ui.viewport->lightCoord[index].x = val;
	}
	else if (name == "yBoxLight") {
		this->ui.viewport->lightCoord[index].y = val;
	}
	else if (name == "zBoxLight") {
		this->ui.viewport->lightCoord[index].z = val;
	}
	this->ui.viewport->update();
}

void MyOwnQtPractice::updateShiny(int val)
{
	this->ui.viewport->shiny = val;
	this->ui.viewport->update();
}

void MyOwnQtPractice::updateCamCoord(int val)
{
	QObject *pObject = sender();
	QString name = pObject->objectName();
	if (name.data()[0] == 'x') {
		this->ui.viewport->xZoom = val;
	}
	else if (name.data()[0] == 'y') {
		this->ui.viewport->yZoom = val;
	}
	else if (name.data()[0] == 'z') {
		this->ui.viewport->zZoom = val;
	}
	this->ui.viewport->update();
}
