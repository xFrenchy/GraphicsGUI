#include "MyOwnQtPractice.h"
#include <iostream>

MyOwnQtPractice::MyOwnQtPractice(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void MyOwnQtPractice::xChangeLevel(int val) {
	std::cout << "value changed: " << val << std::endl;
	this->ui.viewport->xSlider = val;
	this->ui.viewport->update();
}

void MyOwnQtPractice::yChangeLevel(int val) {
	std::cout << "value changed: " << val << std::endl;
	this->ui.viewport->ySlider = val;
	this->ui.viewport->update();
}

void MyOwnQtPractice::zChangeLevel(int val) {
	std::cout << "value changed: " << val << std::endl;
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
	this->ui.ModelLabel->setText("Model Name: ");

	int index = this->ui.viewport->lightSelected;	//index value
	this->ui.viewport->isPointLight[index] = !(this->ui.viewport->isPointLight[index]);
	QString text = "Point Light(";
	text.append(QString::number(index + 1));
	text.append(") = ");
	text.append(QVariant(this->ui.viewport->isPointLight[index]).toString());	//https://stackoverflow.com/questions/9604446/convert-bool-to-qstring
	this->ui.LightDistanceButton->setText(text);

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
	if (name == "AmbR") {
		this->ui.viewport->ambLight[index].r = new_val;
	}
	else if (name == "AmbG") {
		this->ui.viewport->ambLight[index].g = new_val;
	}
	else if (name == "AmbB") {
		this->ui.viewport->ambLight[index].b = new_val;
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
	if (name == "SpecR") {
		this->ui.viewport->specLight[index].r = new_val;
	}
	else if (name == "SpecG") {
		this->ui.viewport->specLight[index].g = new_val;
	}
	else if (name == "SpecB") {
		this->ui.viewport->specLight[index].b = new_val;
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
	if (name == "DiffR") {
		this->ui.viewport->difLight[index].r = new_val;
	}
	else if (name == "DiffG") {
		this->ui.viewport->difLight[index].g = new_val;
	}
	else if (name == "DiffB") {
		this->ui.viewport->difLight[index].b = new_val;
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
	//TODO: This toggle doesn't work, glEnable the hex address isn't turning on the light(diffuse and specular don't work)
	//the lights are only working if I enable them at the resize function.. could be because I'm not using hex for those ones

	int index = this->ui.viewport->lightSelected;
	this->ui.viewport->isLightEnabled[index] = !(this->ui.viewport->isLightEnabled[index]);
	//I could shorten the above 3 lines to this 1 line, but my god does it look ugly. 
	//But that's also beautiful how ugly it looks. But hey, future Anthony, I'll make it readable because I'm sure you'll read this again
	//this->ui.viewport->isLightEnabled[(this->ui.LightPicker->currentText().data()[currentLight.size() - 1]).digitValue() - 1] == !(this->ui.viewport->isLightEnabled[(this->ui.LightPicker->currentText().data()[currentLight.size() - 1]).digitValue() - 1]);
	QString text;
	if (this->ui.viewport->isLightEnabled[index]) {
		//we just set it to enable, so let's do exactly that
		//GL_LIGHT0 is defined as 0x4000, GL_Light1 is 0x4001, 2 is 0x4002 so we can just increment the hex value
		//glEnable(0x4000 + index);
		//or
		//glEnable(GL_LIGHT0 + index);	<--- this is better
		//glEnable(GL_LIGHTING);
		//change the text to the opposite now
		text = "Disable Light(";
	}
	else {
		//glDisable(0x4000 + index);
		//glDisable(GL_LIGHTING);
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
	this->ui.viewport->lightSelected = number - 1;	//it's an index, not the number in the name
	//update label for toggleLight and toggleDistance
	QString text = "Enable Light(";
	text.append(QString::number(number));
	text.append(")");
	this->ui.EnableLightButton->setText(text);
	text = "Point Light(";
	text.append(QString::number(number));
	text.append(") = ");
	text.append(QVariant(this->ui.viewport->isPointLight[number-1]).toString());
	this->ui.LightDistanceButton->setText(text);
	this->ui.viewport->update();
}
