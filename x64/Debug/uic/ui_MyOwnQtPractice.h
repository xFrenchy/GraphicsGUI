/********************************************************************************
** Form generated from reading UI file 'MyOwnQtPractice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYOWNQTPRACTICE_H
#define UI_MYOWNQTPRACTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QViewport.h"

QT_BEGIN_NAMESPACE

class Ui_MyOwnQtPracticeClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QViewport *viewport;
    QWidget *widget;
    QPushButton *OooWhee;
    QLabel *label_2;
    QSlider *ySlider;
    QLabel *label_3;
    QSlider *zSlider;
    QPushButton *ClearButton;
    QLabel *ModelLabel;
    QSlider *xSlider;
    QLabel *label;
    QComboBox *ModelPicker;
    QLabel *label_4;
    QLabel *label_5;
    QDial *LightAmbR;
    QLabel *label_6;
    QDial *LightAmbG;
    QDial *LightAmbB;
    QLabel *label_7;
    QLabel *label_8;
    QDial *LightSpecR;
    QLabel *label_9;
    QDial *LightSpecG;
    QLabel *label_10;
    QDial *LightSpecB;
    QLabel *label_11;
    QLabel *label_12;
    QDial *LightDiffB;
    QDial *LightDiffR;
    QDial *LightDiffG;
    QLabel *label_13;
    QPushButton *LightDistanceButton;
    QComboBox *LightPicker;
    QPushButton *EnableLightButton;
    QLabel *label_14;
    QSpinBox *xBoxLight;
    QLabel *label_15;
    QSpinBox *yBoxLight;
    QLabel *label_16;
    QSpinBox *zBoxLight;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QDial *MatAmbR;
    QLabel *label_20;
    QDial *MatAmbG;
    QLabel *label_21;
    QDial *MatAmbB;
    QLabel *label_22;
    QLabel *label_23;
    QDial *MatDiffG;
    QLabel *label_24;
    QDial *MatDiffB;
    QDial *MatDiffR;
    QDial *MatSpecR;
    QLabel *label_25;
    QDial *MatSpecG;
    QLabel *label_26;
    QLabel *label_27;
    QDial *MatSpecB;
    QLabel *label_28;
    QSpinBox *ShinyBox;
    QLabel *label_29;
    QLabel *label_30;
    QSpinBox *xBoxCam;
    QLabel *label_31;
    QLabel *label_32;
    QSpinBox *yBoxCam;
    QSpinBox *zBoxCam;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *NoneShaderButton;
    QPushButton *ToonShaderButton;
    QPushButton *SobelShaderButton;
    QPushButton *DiscoShaderButton;
    QPushButton *NoiseShaderButton;
    QLabel *label_71;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyOwnQtPracticeClass)
    {
        if (MyOwnQtPracticeClass->objectName().isEmpty())
            MyOwnQtPracticeClass->setObjectName(QString::fromUtf8("MyOwnQtPracticeClass"));
        MyOwnQtPracticeClass->resize(1149, 849);
        centralWidget = new QWidget(MyOwnQtPracticeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        viewport = new QViewport(centralWidget);
        viewport->setObjectName(QString::fromUtf8("viewport"));
        viewport->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));

        gridLayout->addWidget(viewport, 0, 1, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        OooWhee = new QPushButton(widget);
        OooWhee->setObjectName(QString::fromUtf8("OooWhee"));
        OooWhee->setGeometry(QRect(0, 750, 75, 23));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(4, 40, 50, 22));
        ySlider = new QSlider(widget);
        ySlider->setObjectName(QString::fromUtf8("ySlider"));
        ySlider->setGeometry(QRect(60, 40, 84, 22));
        ySlider->setMinimum(-300);
        ySlider->setMaximum(300);
        ySlider->setValue(0);
        ySlider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(4, 60, 50, 22));
        zSlider = new QSlider(widget);
        zSlider->setObjectName(QString::fromUtf8("zSlider"));
        zSlider->setGeometry(QRect(60, 60, 84, 22));
        zSlider->setMinimum(-300);
        zSlider->setMaximum(300);
        zSlider->setValue(0);
        zSlider->setOrientation(Qt::Horizontal);
        ClearButton = new QPushButton(widget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setGeometry(QRect(480, 750, 75, 23));
        ModelLabel = new QLabel(widget);
        ModelLabel->setObjectName(QString::fromUtf8("ModelLabel"));
        ModelLabel->setGeometry(QRect(430, 0, 131, 20));
        xSlider = new QSlider(widget);
        xSlider->setObjectName(QString::fromUtf8("xSlider"));
        xSlider->setGeometry(QRect(60, 20, 84, 22));
        xSlider->setMinimum(-300);
        xSlider->setMaximum(300);
        xSlider->setValue(0);
        xSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(4, 20, 50, 22));
        ModelPicker = new QComboBox(widget);
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->addItem(QString());
        ModelPicker->setObjectName(QString::fromUtf8("ModelPicker"));
        ModelPicker->setGeometry(QRect(430, 20, 121, 22));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 80, 561, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 130, 51, 16));
        LightAmbR = new QDial(widget);
        LightAmbR->setObjectName(QString::fromUtf8("LightAmbR"));
        LightAmbR->setGeometry(QRect(60, 110, 50, 50));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 130, 47, 16));
        LightAmbG = new QDial(widget);
        LightAmbG->setObjectName(QString::fromUtf8("LightAmbG"));
        LightAmbG->setGeometry(QRect(140, 110, 50, 50));
        LightAmbB = new QDial(widget);
        LightAmbB->setObjectName(QString::fromUtf8("LightAmbB"));
        LightAmbB->setGeometry(QRect(210, 110, 50, 50));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 130, 47, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 230, 51, 13));
        LightSpecR = new QDial(widget);
        LightSpecR->setObjectName(QString::fromUtf8("LightSpecR"));
        LightSpecR->setGeometry(QRect(60, 210, 50, 50));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 230, 47, 13));
        LightSpecG = new QDial(widget);
        LightSpecG->setObjectName(QString::fromUtf8("LightSpecG"));
        LightSpecG->setGeometry(QRect(140, 210, 50, 50));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(200, 230, 47, 13));
        LightSpecB = new QDial(widget);
        LightSpecB->setObjectName(QString::fromUtf8("LightSpecB"));
        LightSpecB->setGeometry(QRect(210, 210, 50, 50));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(120, 180, 47, 13));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(200, 180, 47, 13));
        LightDiffB = new QDial(widget);
        LightDiffB->setObjectName(QString::fromUtf8("LightDiffB"));
        LightDiffB->setGeometry(QRect(210, 160, 50, 50));
        LightDiffR = new QDial(widget);
        LightDiffR->setObjectName(QString::fromUtf8("LightDiffR"));
        LightDiffR->setGeometry(QRect(60, 160, 50, 50));
        LightDiffG = new QDial(widget);
        LightDiffG->setObjectName(QString::fromUtf8("LightDiffG"));
        LightDiffG->setGeometry(QRect(140, 160, 50, 50));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 180, 47, 13));
        LightDistanceButton = new QPushButton(widget);
        LightDistanceButton->setObjectName(QString::fromUtf8("LightDistanceButton"));
        LightDistanceButton->setGeometry(QRect(450, 140, 101, 31));
        QFont font;
        font.setPointSize(7);
        LightDistanceButton->setFont(font);
        LightPicker = new QComboBox(widget);
        LightPicker->addItem(QString());
        LightPicker->addItem(QString());
        LightPicker->addItem(QString());
        LightPicker->setObjectName(QString::fromUtf8("LightPicker"));
        LightPicker->setGeometry(QRect(370, 120, 69, 22));
        EnableLightButton = new QPushButton(widget);
        EnableLightButton->setObjectName(QString::fromUtf8("EnableLightButton"));
        EnableLightButton->setGeometry(QRect(450, 100, 101, 31));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(284, 190, 20, 16));
        xBoxLight = new QSpinBox(widget);
        xBoxLight->setObjectName(QString::fromUtf8("xBoxLight"));
        xBoxLight->setGeometry(QRect(294, 190, 40, 16));
        xBoxLight->setMinimum(-500);
        xBoxLight->setMaximum(50);
        xBoxLight->setSingleStep(5);
        xBoxLight->setValue(0);
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(339, 190, 47, 13));
        yBoxLight = new QSpinBox(widget);
        yBoxLight->setObjectName(QString::fromUtf8("yBoxLight"));
        yBoxLight->setGeometry(QRect(347, 190, 40, 16));
        yBoxLight->setMinimum(-500);
        yBoxLight->setMaximum(500);
        yBoxLight->setSingleStep(5);
        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(390, 190, 47, 13));
        zBoxLight = new QSpinBox(widget);
        zBoxLight->setObjectName(QString::fromUtf8("zBoxLight"));
        zBoxLight->setGeometry(QRect(399, 190, 40, 16));
        zBoxLight->setMinimum(-500);
        zBoxLight->setMaximum(500);
        zBoxLight->setSingleStep(5);
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 280, 561, 16));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(150, 302, 47, 13));
        QFont font1;
        font1.setPointSize(10);
        label_18->setFont(font1);
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 330, 47, 13));
        MatAmbR = new QDial(widget);
        MatAmbR->setObjectName(QString::fromUtf8("MatAmbR"));
        MatAmbR->setGeometry(QRect(60, 310, 50, 50));
        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(120, 330, 47, 13));
        MatAmbG = new QDial(widget);
        MatAmbG->setObjectName(QString::fromUtf8("MatAmbG"));
        MatAmbG->setGeometry(QRect(140, 310, 50, 50));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(200, 330, 47, 13));
        MatAmbB = new QDial(widget);
        MatAmbB->setObjectName(QString::fromUtf8("MatAmbB"));
        MatAmbB->setGeometry(QRect(210, 310, 50, 50));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(0, 380, 47, 13));
        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(200, 380, 47, 13));
        MatDiffG = new QDial(widget);
        MatDiffG->setObjectName(QString::fromUtf8("MatDiffG"));
        MatDiffG->setGeometry(QRect(140, 360, 50, 50));
        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(120, 376, 51, 21));
        MatDiffB = new QDial(widget);
        MatDiffB->setObjectName(QString::fromUtf8("MatDiffB"));
        MatDiffB->setGeometry(QRect(210, 360, 50, 50));
        MatDiffR = new QDial(widget);
        MatDiffR->setObjectName(QString::fromUtf8("MatDiffR"));
        MatDiffR->setGeometry(QRect(60, 360, 50, 50));
        MatSpecR = new QDial(widget);
        MatSpecR->setObjectName(QString::fromUtf8("MatSpecR"));
        MatSpecR->setGeometry(QRect(60, 410, 50, 50));
        label_25 = new QLabel(widget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(120, 430, 47, 13));
        MatSpecG = new QDial(widget);
        MatSpecG->setObjectName(QString::fromUtf8("MatSpecG"));
        MatSpecG->setGeometry(QRect(140, 410, 50, 50));
        label_26 = new QLabel(widget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(0, 430, 51, 13));
        label_27 = new QLabel(widget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(200, 430, 47, 13));
        MatSpecB = new QDial(widget);
        MatSpecB->setObjectName(QString::fromUtf8("MatSpecB"));
        MatSpecB->setGeometry(QRect(210, 410, 50, 50));
        label_28 = new QLabel(widget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(460, 190, 47, 13));
        ShinyBox = new QSpinBox(widget);
        ShinyBox->setObjectName(QString::fromUtf8("ShinyBox"));
        ShinyBox->setGeometry(QRect(510, 190, 40, 16));
        ShinyBox->setMinimum(1);
        ShinyBox->setMaximum(128);
        ShinyBox->setValue(1);
        label_29 = new QLabel(widget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(40, 0, 71, 16));
        label_30 = new QLabel(widget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(240, 0, 91, 16));
        xBoxCam = new QSpinBox(widget);
        xBoxCam->setObjectName(QString::fromUtf8("xBoxCam"));
        xBoxCam->setGeometry(QRect(220, 20, 40, 16));
        xBoxCam->setMinimum(-500);
        xBoxCam->setMaximum(500);
        xBoxCam->setSingleStep(20);
        xBoxCam->setValue(0);
        label_31 = new QLabel(widget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(210, 21, 47, 13));
        label_32 = new QLabel(widget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(263, 22, 47, 13));
        yBoxCam = new QSpinBox(widget);
        yBoxCam->setObjectName(QString::fromUtf8("yBoxCam"));
        yBoxCam->setGeometry(QRect(270, 20, 40, 16));
        yBoxCam->setMinimum(-500);
        yBoxCam->setMaximum(500);
        yBoxCam->setSingleStep(20);
        yBoxCam->setValue(0);
        zBoxCam = new QSpinBox(widget);
        zBoxCam->setObjectName(QString::fromUtf8("zBoxCam"));
        zBoxCam->setGeometry(QRect(320, 20, 40, 16));
        zBoxCam->setMinimum(-500);
        zBoxCam->setMaximum(500);
        zBoxCam->setSingleStep(20);
        zBoxCam->setValue(0);
        label_33 = new QLabel(widget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(313, 21, 47, 13));
        label_34 = new QLabel(widget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(330, 171, 71, 16));
        label_35 = new QLabel(widget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(450, 300, 47, 13));
        NoneShaderButton = new QPushButton(widget);
        NoneShaderButton->setObjectName(QString::fromUtf8("NoneShaderButton"));
        NoneShaderButton->setGeometry(QRect(390, 320, 75, 25));
        ToonShaderButton = new QPushButton(widget);
        ToonShaderButton->setObjectName(QString::fromUtf8("ToonShaderButton"));
        ToonShaderButton->setGeometry(QRect(470, 320, 75, 25));
        SobelShaderButton = new QPushButton(widget);
        SobelShaderButton->setObjectName(QString::fromUtf8("SobelShaderButton"));
        SobelShaderButton->setGeometry(QRect(390, 360, 75, 25));
        DiscoShaderButton = new QPushButton(widget);
        DiscoShaderButton->setObjectName(QString::fromUtf8("DiscoShaderButton"));
        DiscoShaderButton->setGeometry(QRect(470, 360, 75, 25));
        NoiseShaderButton = new QPushButton(widget);
        NoiseShaderButton->setObjectName(QString::fromUtf8("NoiseShaderButton"));
        NoiseShaderButton->setGeometry(QRect(430, 390, 75, 25));
        label_71 = new QLabel(widget);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(150, 94, 47, 13));
        label_71->setFont(font1);
        OooWhee->raise();
        label_2->raise();
        ySlider->raise();
        label_3->raise();
        zSlider->raise();
        ClearButton->raise();
        ModelLabel->raise();
        xSlider->raise();
        label->raise();
        ModelPicker->raise();
        label_4->raise();
        label_5->raise();
        LightAmbR->raise();
        label_6->raise();
        LightAmbG->raise();
        label_7->raise();
        LightAmbB->raise();
        label_8->raise();
        LightSpecR->raise();
        label_9->raise();
        LightSpecG->raise();
        label_10->raise();
        LightSpecB->raise();
        label_11->raise();
        label_12->raise();
        LightDiffB->raise();
        LightDiffR->raise();
        LightDiffG->raise();
        label_13->raise();
        LightDistanceButton->raise();
        LightPicker->raise();
        EnableLightButton->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        xBoxLight->raise();
        yBoxLight->raise();
        zBoxLight->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        MatAmbR->raise();
        label_20->raise();
        MatAmbG->raise();
        label_21->raise();
        MatAmbB->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        MatDiffB->raise();
        MatDiffR->raise();
        MatDiffG->raise();
        MatSpecR->raise();
        label_25->raise();
        MatSpecG->raise();
        label_26->raise();
        label_27->raise();
        MatSpecB->raise();
        label_28->raise();
        ShinyBox->raise();
        label_29->raise();
        label_30->raise();
        label_31->raise();
        xBoxCam->raise();
        label_32->raise();
        yBoxCam->raise();
        label_33->raise();
        zBoxCam->raise();
        label_34->raise();
        label_35->raise();
        NoneShaderButton->raise();
        ToonShaderButton->raise();
        SobelShaderButton->raise();
        DiscoShaderButton->raise();
        NoiseShaderButton->raise();
        label_71->raise();

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MyOwnQtPracticeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyOwnQtPracticeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1149, 21));
        MyOwnQtPracticeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyOwnQtPracticeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyOwnQtPracticeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyOwnQtPracticeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyOwnQtPracticeClass->setStatusBar(statusBar);

        retranslateUi(MyOwnQtPracticeClass);
        QObject::connect(xSlider, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(xChangeLevel(int)));
        QObject::connect(OooWhee, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(oooWee()));
        QObject::connect(ySlider, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(yChangeLevel(int)));
        QObject::connect(zSlider, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(zChangeLevel(int)));
        QObject::connect(ClearButton, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(clear()));
        QObject::connect(ModelPicker, SIGNAL(activated(QString)), MyOwnQtPracticeClass, SLOT(generateMeshFromFile(QString)));
        QObject::connect(LightAmbR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(LightAmbG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(LightAmbB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(LightSpecR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(LightSpecG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(LightSpecB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(LightDiffR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(LightDiffG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(LightDiffB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(LightDistanceButton, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(toggleLightDistance()));
        QObject::connect(EnableLightButton, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(toggleEnableLight()));
        QObject::connect(LightPicker, SIGNAL(activated(QString)), MyOwnQtPracticeClass, SLOT(selectLight(QString)));
        QObject::connect(xBoxLight, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateLightCoord(int)));
        QObject::connect(yBoxLight, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateLightCoord(int)));
        QObject::connect(zBoxLight, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateLightCoord(int)));
        QObject::connect(MatAmbR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(MatAmbG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(MatDiffB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(MatAmbB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(ShinyBox, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateShiny(int)));
        QObject::connect(MatDiffG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(MatDiffR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(MatSpecR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(MatSpecG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(MatSpecB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(xBoxCam, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateCamCoord(int)));
        QObject::connect(yBoxCam, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateCamCoord(int)));
        QObject::connect(zBoxCam, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateCamCoord(int)));
        QObject::connect(NoneShaderButton, SIGNAL(clicked()), MyOwnQtPracticeClass, SLOT(selectShader()));
        QObject::connect(ToonShaderButton, SIGNAL(clicked()), MyOwnQtPracticeClass, SLOT(selectShader()));
        QObject::connect(SobelShaderButton, SIGNAL(clicked()), MyOwnQtPracticeClass, SLOT(selectShader()));
        QObject::connect(DiscoShaderButton, SIGNAL(clicked()), MyOwnQtPracticeClass, SLOT(selectShader()));
        QObject::connect(NoiseShaderButton, SIGNAL(clicked()), MyOwnQtPracticeClass, SLOT(selectShader()));

        NoneShaderButton->setDefault(true);
        ToonShaderButton->setDefault(false);
        SobelShaderButton->setDefault(false);
        DiscoShaderButton->setDefault(false);
        NoiseShaderButton->setDefault(false);


        QMetaObject::connectSlotsByName(MyOwnQtPracticeClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyOwnQtPracticeClass)
    {
        MyOwnQtPracticeClass->setWindowTitle(QApplication::translate("MyOwnQtPracticeClass", "MyOwnQtPractice", nullptr));
        OooWhee->setText(QApplication::translate("MyOwnQtPracticeClass", "OooWhee", nullptr));
        label_2->setText(QApplication::translate("MyOwnQtPracticeClass", "y direction", nullptr));
        label_3->setText(QApplication::translate("MyOwnQtPracticeClass", "z direction", nullptr));
        ClearButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Reset", nullptr));
        ModelLabel->setText(QApplication::translate("MyOwnQtPracticeClass", "Model Name: ", nullptr));
        label->setText(QApplication::translate("MyOwnQtPracticeClass", "x direction", nullptr));
        ModelPicker->setItemText(0, QApplication::translate("MyOwnQtPracticeClass", "Blender", nullptr));
        ModelPicker->setItemText(1, QApplication::translate("MyOwnQtPracticeClass", "Cup", nullptr));
        ModelPicker->setItemText(2, QApplication::translate("MyOwnQtPracticeClass", "Cyph", nullptr));
        ModelPicker->setItemText(3, QApplication::translate("MyOwnQtPracticeClass", "Hubble", nullptr));
        ModelPicker->setItemText(4, QApplication::translate("MyOwnQtPracticeClass", "Planet Camera", nullptr));
        ModelPicker->setItemText(5, QApplication::translate("MyOwnQtPracticeClass", "Shovel", nullptr));
        ModelPicker->setItemText(6, QApplication::translate("MyOwnQtPracticeClass", "Shuttle", nullptr));
        ModelPicker->setItemText(7, QApplication::translate("MyOwnQtPracticeClass", "Spoon", nullptr));
        ModelPicker->setItemText(8, QApplication::translate("MyOwnQtPracticeClass", "Wrench", nullptr));
        ModelPicker->setItemText(9, QApplication::translate("MyOwnQtPracticeClass", "Zepplin", nullptr));

        ModelPicker->setCurrentText(QApplication::translate("MyOwnQtPracticeClass", "Blender", nullptr));
        label_4->setText(QApplication::translate("MyOwnQtPracticeClass", "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -", nullptr));
        label_5->setText(QApplication::translate("MyOwnQtPracticeClass", "Ambient R", nullptr));
        label_6->setText(QApplication::translate("MyOwnQtPracticeClass", "G", nullptr));
        label_7->setText(QApplication::translate("MyOwnQtPracticeClass", "B        ", nullptr));
        label_8->setText(QApplication::translate("MyOwnQtPracticeClass", "Specular R", nullptr));
        label_9->setText(QApplication::translate("MyOwnQtPracticeClass", "G", nullptr));
        label_10->setText(QApplication::translate("MyOwnQtPracticeClass", "B        ", nullptr));
        label_11->setText(QApplication::translate("MyOwnQtPracticeClass", "G", nullptr));
        label_12->setText(QApplication::translate("MyOwnQtPracticeClass", "B        ", nullptr));
        label_13->setText(QApplication::translate("MyOwnQtPracticeClass", "Diffuse  R", nullptr));
        LightDistanceButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Point Light(1) = true", nullptr));
        LightPicker->setItemText(0, QApplication::translate("MyOwnQtPracticeClass", "Light1", nullptr));
        LightPicker->setItemText(1, QApplication::translate("MyOwnQtPracticeClass", "Light2", nullptr));
        LightPicker->setItemText(2, QApplication::translate("MyOwnQtPracticeClass", "Light3", nullptr));

        EnableLightButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Enable Light(1)", nullptr));
        label_14->setText(QApplication::translate("MyOwnQtPracticeClass", "X", nullptr));
        label_15->setText(QApplication::translate("MyOwnQtPracticeClass", "Y", nullptr));
        label_16->setText(QApplication::translate("MyOwnQtPracticeClass", "Z", nullptr));
        label_17->setText(QApplication::translate("MyOwnQtPracticeClass", "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -", nullptr));
        label_18->setText(QApplication::translate("MyOwnQtPracticeClass", "Material", nullptr));
        label_19->setText(QApplication::translate("MyOwnQtPracticeClass", "Ambient R", nullptr));
        label_20->setText(QApplication::translate("MyOwnQtPracticeClass", "G", nullptr));
        label_21->setText(QApplication::translate("MyOwnQtPracticeClass", "B        ", nullptr));
        label_22->setText(QApplication::translate("MyOwnQtPracticeClass", "Diffuse  R", nullptr));
        label_23->setText(QApplication::translate("MyOwnQtPracticeClass", "B        ", nullptr));
        label_24->setText(QApplication::translate("MyOwnQtPracticeClass", "G", nullptr));
        label_25->setText(QApplication::translate("MyOwnQtPracticeClass", "G", nullptr));
        label_26->setText(QApplication::translate("MyOwnQtPracticeClass", "Specular R", nullptr));
        label_27->setText(QApplication::translate("MyOwnQtPracticeClass", "B        ", nullptr));
        label_28->setText(QApplication::translate("MyOwnQtPracticeClass", "Shininess", nullptr));
        label_29->setText(QApplication::translate("MyOwnQtPracticeClass", "Model Position", nullptr));
        label_30->setText(QApplication::translate("MyOwnQtPracticeClass", "Camera Position", nullptr));
        label_31->setText(QApplication::translate("MyOwnQtPracticeClass", "X", nullptr));
        label_32->setText(QApplication::translate("MyOwnQtPracticeClass", "Y", nullptr));
        label_33->setText(QApplication::translate("MyOwnQtPracticeClass", "Z", nullptr));
        label_34->setText(QApplication::translate("MyOwnQtPracticeClass", "Light Position", nullptr));
        label_35->setText(QApplication::translate("MyOwnQtPracticeClass", "Shaders:", nullptr));
        NoneShaderButton->setText(QApplication::translate("MyOwnQtPracticeClass", "None", nullptr));
        ToonShaderButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Toon", nullptr));
        SobelShaderButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Sobel", nullptr));
        DiscoShaderButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Disco", nullptr));
        NoiseShaderButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Noise", nullptr));
        label_71->setText(QApplication::translate("MyOwnQtPracticeClass", "Lights", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyOwnQtPracticeClass: public Ui_MyOwnQtPracticeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYOWNQTPRACTICE_H
