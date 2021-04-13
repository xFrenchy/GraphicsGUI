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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
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
    QSpinBox *xBox;
    QLabel *label_15;
    QSpinBox *yBox;
    QLabel *label_16;
    QSpinBox *zBox;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyOwnQtPracticeClass)
    {
        if (MyOwnQtPracticeClass->objectName().isEmpty())
            MyOwnQtPracticeClass->setObjectName(QString::fromUtf8("MyOwnQtPracticeClass"));
        MyOwnQtPracticeClass->resize(672, 465);
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
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 142, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OooWhee = new QPushButton(widget);
        OooWhee->setObjectName(QString::fromUtf8("OooWhee"));
        OooWhee->setGeometry(QRect(30, 340, 75, 23));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(4, 30, 50, 22));
        ySlider = new QSlider(widget);
        ySlider->setObjectName(QString::fromUtf8("ySlider"));
        ySlider->setGeometry(QRect(60, 30, 84, 22));
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
        ClearButton->setGeometry(QRect(240, 360, 75, 23));
        ModelLabel = new QLabel(widget);
        ModelLabel->setObjectName(QString::fromUtf8("ModelLabel"));
        ModelLabel->setGeometry(QRect(196, 0, 131, 20));
        xSlider = new QSlider(widget);
        xSlider->setObjectName(QString::fromUtf8("xSlider"));
        xSlider->setGeometry(QRect(60, 0, 84, 22));
        xSlider->setMinimum(-300);
        xSlider->setMaximum(300);
        xSlider->setValue(0);
        xSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(4, 0, 50, 22));
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
        ModelPicker->setGeometry(QRect(198, 20, 121, 22));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 80, 321, 16));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 100, 47, 13));
        LightAmbR = new QDial(widget);
        LightAmbR->setObjectName(QString::fromUtf8("LightAmbR"));
        LightAmbR->setGeometry(QRect(50, 90, 21, 31));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 100, 47, 13));
        LightAmbG = new QDial(widget);
        LightAmbG->setObjectName(QString::fromUtf8("LightAmbG"));
        LightAmbG->setGeometry(QRect(90, 90, 21, 31));
        LightAmbB = new QDial(widget);
        LightAmbB->setObjectName(QString::fromUtf8("LightAmbB"));
        LightAmbB->setGeometry(QRect(130, 90, 21, 31));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 100, 47, 13));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 160, 51, 13));
        LightSpecR = new QDial(widget);
        LightSpecR->setObjectName(QString::fromUtf8("LightSpecR"));
        LightSpecR->setGeometry(QRect(50, 150, 21, 31));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 160, 47, 13));
        LightSpecG = new QDial(widget);
        LightSpecG->setObjectName(QString::fromUtf8("LightSpecG"));
        LightSpecG->setGeometry(QRect(90, 150, 21, 31));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 160, 47, 13));
        LightSpecB = new QDial(widget);
        LightSpecB->setObjectName(QString::fromUtf8("LightSpecB"));
        LightSpecB->setGeometry(QRect(130, 150, 21, 31));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 130, 47, 13));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(120, 130, 47, 13));
        LightDiffB = new QDial(widget);
        LightDiffB->setObjectName(QString::fromUtf8("LightDiffB"));
        LightDiffB->setGeometry(QRect(130, 120, 21, 31));
        LightDiffR = new QDial(widget);
        LightDiffR->setObjectName(QString::fromUtf8("LightDiffR"));
        LightDiffR->setGeometry(QRect(50, 120, 21, 31));
        LightDiffG = new QDial(widget);
        LightDiffG->setObjectName(QString::fromUtf8("LightDiffG"));
        LightDiffG->setGeometry(QRect(90, 120, 21, 31));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 130, 47, 13));
        LightDistanceButton = new QPushButton(widget);
        LightDistanceButton->setObjectName(QString::fromUtf8("LightDistanceButton"));
        LightDistanceButton->setGeometry(QRect(220, 140, 101, 31));
        QFont font;
        font.setPointSize(7);
        LightDistanceButton->setFont(font);
        LightPicker = new QComboBox(widget);
        LightPicker->addItem(QString());
        LightPicker->addItem(QString());
        LightPicker->addItem(QString());
        LightPicker->setObjectName(QString::fromUtf8("LightPicker"));
        LightPicker->setGeometry(QRect(150, 130, 69, 22));
        EnableLightButton = new QPushButton(widget);
        EnableLightButton->setObjectName(QString::fromUtf8("EnableLightButton"));
        EnableLightButton->setGeometry(QRect(220, 110, 101, 31));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(130, 180, 47, 13));
        xBox = new QSpinBox(widget);
        xBox->setObjectName(QString::fromUtf8("xBox"));
        xBox->setGeometry(QRect(180, 180, 40, 16));
        xBox->setMinimum(-50);
        xBox->setMaximum(50);
        xBox->setValue(0);
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(225, 180, 47, 13));
        yBox = new QSpinBox(widget);
        yBox->setObjectName(QString::fromUtf8("yBox"));
        yBox->setGeometry(QRect(233, 180, 40, 16));
        yBox->setMinimum(-50);
        yBox->setMaximum(50);
        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(276, 180, 47, 13));
        zBox = new QSpinBox(widget);
        zBox->setObjectName(QString::fromUtf8("zBox"));
        zBox->setGeometry(QRect(285, 180, 40, 16));
        zBox->setMinimum(-50);
        zBox->setMaximum(50);
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 200, 321, 16));
        label_18 = new QLabel(widget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(140, 210, 47, 13));
        QFont font1;
        font1.setPointSize(10);
        label_18->setFont(font1);
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 220, 47, 13));
        MatAmbR = new QDial(widget);
        MatAmbR->setObjectName(QString::fromUtf8("MatAmbR"));
        MatAmbR->setGeometry(QRect(50, 210, 21, 31));
        label_20 = new QLabel(widget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(70, 220, 47, 13));
        MatAmbG = new QDial(widget);
        MatAmbG->setObjectName(QString::fromUtf8("MatAmbG"));
        MatAmbG->setGeometry(QRect(80, 210, 21, 31));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(110, 220, 47, 13));
        MatAmbB = new QDial(widget);
        MatAmbB->setObjectName(QString::fromUtf8("MatAmbB"));
        MatAmbB->setGeometry(QRect(120, 210, 21, 31));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(0, 240, 47, 13));
        label_23 = new QLabel(widget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(110, 240, 47, 13));
        MatDiffG = new QDial(widget);
        MatDiffG->setObjectName(QString::fromUtf8("MatDiffG"));
        MatDiffG->setGeometry(QRect(80, 230, 21, 31));
        label_24 = new QLabel(widget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(70, 240, 47, 13));
        MatDiffB = new QDial(widget);
        MatDiffB->setObjectName(QString::fromUtf8("MatDiffB"));
        MatDiffB->setGeometry(QRect(120, 230, 21, 31));
        MatDiffR = new QDial(widget);
        MatDiffR->setObjectName(QString::fromUtf8("MatDiffR"));
        MatDiffR->setGeometry(QRect(50, 230, 21, 31));
        MatSpecR = new QDial(widget);
        MatSpecR->setObjectName(QString::fromUtf8("MatSpecR"));
        MatSpecR->setGeometry(QRect(50, 250, 21, 31));
        label_25 = new QLabel(widget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(70, 260, 47, 13));
        MatSpecG = new QDial(widget);
        MatSpecG->setObjectName(QString::fromUtf8("MatSpecG"));
        MatSpecG->setGeometry(QRect(80, 250, 21, 31));
        label_26 = new QLabel(widget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(0, 260, 51, 13));
        label_27 = new QLabel(widget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(110, 260, 47, 13));
        MatSpecB = new QDial(widget);
        MatSpecB->setObjectName(QString::fromUtf8("MatSpecB"));
        MatSpecB->setGeometry(QRect(120, 250, 21, 31));
        label_28 = new QLabel(widget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(30, 280, 47, 13));
        ShinyBox = new QSpinBox(widget);
        ShinyBox->setObjectName(QString::fromUtf8("ShinyBox"));
        ShinyBox->setGeometry(QRect(80, 280, 40, 16));
        ShinyBox->setMinimum(0);
        ShinyBox->setMaximum(10);
        ShinyBox->setValue(1);
        layoutWidget->raise();
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
        xBox->raise();
        yBox->raise();
        zBox->raise();
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

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        MyOwnQtPracticeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyOwnQtPracticeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 21));
        MyOwnQtPracticeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyOwnQtPracticeClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyOwnQtPracticeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyOwnQtPracticeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyOwnQtPracticeClass->setStatusBar(statusBar);

        retranslateUi(MyOwnQtPracticeClass);
        QObject::connect(xSlider, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(xChangeLevel(int)));
        QObject::connect(OooWhee, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(generateMeshFromFile()));
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
        QObject::connect(xBox, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateLightCoord(int)));
        QObject::connect(yBox, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateLightCoord(int)));
        QObject::connect(zBox, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateLightCoord(int)));
        QObject::connect(MatAmbR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(MatAmbG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(MatDiffB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(MatAmbB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(ShinyBox, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateShiny(int)));

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
        ModelPicker->setItemText(3, QApplication::translate("MyOwnQtPracticeClass", "Huble", nullptr));
        ModelPicker->setItemText(4, QApplication::translate("MyOwnQtPracticeClass", "Planet Camera", nullptr));
        ModelPicker->setItemText(5, QApplication::translate("MyOwnQtPracticeClass", "Shovel", nullptr));
        ModelPicker->setItemText(6, QApplication::translate("MyOwnQtPracticeClass", "Shuttle", nullptr));
        ModelPicker->setItemText(7, QApplication::translate("MyOwnQtPracticeClass", "Spoon", nullptr));
        ModelPicker->setItemText(8, QApplication::translate("MyOwnQtPracticeClass", "Wrench", nullptr));
        ModelPicker->setItemText(9, QApplication::translate("MyOwnQtPracticeClass", "Zepplin", nullptr));

        ModelPicker->setCurrentText(QApplication::translate("MyOwnQtPracticeClass", "Blender", nullptr));
        label_4->setText(QApplication::translate("MyOwnQtPracticeClass", "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -", nullptr));
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
        label_14->setText(QApplication::translate("MyOwnQtPracticeClass", "Position X", nullptr));
        label_15->setText(QApplication::translate("MyOwnQtPracticeClass", "Y", nullptr));
        label_16->setText(QApplication::translate("MyOwnQtPracticeClass", "Z", nullptr));
        label_17->setText(QApplication::translate("MyOwnQtPracticeClass", "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class MyOwnQtPracticeClass: public Ui_MyOwnQtPracticeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYOWNQTPRACTICE_H
