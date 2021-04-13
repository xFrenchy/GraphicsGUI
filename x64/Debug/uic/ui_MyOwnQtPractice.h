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
    QDial *AmbR;
    QLabel *label_6;
    QDial *AmbG;
    QDial *AmbB;
    QLabel *label_7;
    QLabel *label_8;
    QDial *SpecR;
    QLabel *label_9;
    QDial *SpecG;
    QLabel *label_10;
    QDial *SpecB;
    QLabel *label_11;
    QLabel *label_12;
    QDial *DiffB;
    QDial *DiffR;
    QDial *DiffG;
    QLabel *label_13;
    QPushButton *LightDistanceButton;
    QComboBox *LightPicker;
    QPushButton *EnableLightButton;
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
        AmbR = new QDial(widget);
        AmbR->setObjectName(QString::fromUtf8("AmbR"));
        AmbR->setGeometry(QRect(50, 90, 21, 31));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 100, 47, 13));
        AmbG = new QDial(widget);
        AmbG->setObjectName(QString::fromUtf8("AmbG"));
        AmbG->setGeometry(QRect(90, 90, 21, 31));
        AmbB = new QDial(widget);
        AmbB->setObjectName(QString::fromUtf8("AmbB"));
        AmbB->setGeometry(QRect(130, 90, 21, 31));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 100, 47, 13));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 160, 47, 13));
        SpecR = new QDial(widget);
        SpecR->setObjectName(QString::fromUtf8("SpecR"));
        SpecR->setGeometry(QRect(50, 150, 21, 31));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 160, 47, 13));
        SpecG = new QDial(widget);
        SpecG->setObjectName(QString::fromUtf8("SpecG"));
        SpecG->setGeometry(QRect(90, 150, 21, 31));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 160, 47, 13));
        SpecB = new QDial(widget);
        SpecB->setObjectName(QString::fromUtf8("SpecB"));
        SpecB->setGeometry(QRect(130, 150, 21, 31));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 130, 47, 13));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(120, 130, 47, 13));
        DiffB = new QDial(widget);
        DiffB->setObjectName(QString::fromUtf8("DiffB"));
        DiffB->setGeometry(QRect(130, 120, 21, 31));
        DiffR = new QDial(widget);
        DiffR->setObjectName(QString::fromUtf8("DiffR"));
        DiffR->setGeometry(QRect(50, 120, 21, 31));
        DiffG = new QDial(widget);
        DiffG->setObjectName(QString::fromUtf8("DiffG"));
        DiffG->setGeometry(QRect(90, 120, 21, 31));
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
        AmbR->raise();
        label_6->raise();
        AmbG->raise();
        label_7->raise();
        AmbB->raise();
        label_8->raise();
        SpecR->raise();
        label_9->raise();
        SpecG->raise();
        label_10->raise();
        SpecB->raise();
        label_11->raise();
        label_12->raise();
        DiffB->raise();
        DiffR->raise();
        DiffG->raise();
        label_13->raise();
        LightDistanceButton->raise();
        LightPicker->raise();
        EnableLightButton->raise();

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
        QObject::connect(AmbR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(AmbG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(AmbB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateAmbient(int)));
        QObject::connect(SpecR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(SpecG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(SpecB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateSpecular(int)));
        QObject::connect(DiffR, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(DiffG, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(DiffB, SIGNAL(valueChanged(int)), MyOwnQtPracticeClass, SLOT(updateDiffuse(int)));
        QObject::connect(LightDistanceButton, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(toggleLightDistance()));
        QObject::connect(EnableLightButton, SIGNAL(pressed()), MyOwnQtPracticeClass, SLOT(toggleEnableLight()));
        QObject::connect(LightPicker, SIGNAL(activated(QString)), MyOwnQtPracticeClass, SLOT(selectLight(QString)));

        QMetaObject::connectSlotsByName(MyOwnQtPracticeClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyOwnQtPracticeClass)
    {
        MyOwnQtPracticeClass->setWindowTitle(QApplication::translate("MyOwnQtPracticeClass", "MyOwnQtPractice", nullptr));
        OooWhee->setText(QApplication::translate("MyOwnQtPracticeClass", "OooWhee", nullptr));
        label_2->setText(QApplication::translate("MyOwnQtPracticeClass", "y direction", nullptr));
        label_3->setText(QApplication::translate("MyOwnQtPracticeClass", "z direction", nullptr));
        ClearButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Clear Screen", nullptr));
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
        label_13->setText(QApplication::translate("MyOwnQtPracticeClass", "Diffuse R", nullptr));
        LightDistanceButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Point Light(1) = true", nullptr));
        LightPicker->setItemText(0, QApplication::translate("MyOwnQtPracticeClass", "Light1", nullptr));
        LightPicker->setItemText(1, QApplication::translate("MyOwnQtPracticeClass", "Light2", nullptr));
        LightPicker->setItemText(2, QApplication::translate("MyOwnQtPracticeClass", "Light3", nullptr));

        EnableLightButton->setText(QApplication::translate("MyOwnQtPracticeClass", "Enable Light(1)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyOwnQtPracticeClass: public Ui_MyOwnQtPracticeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYOWNQTPRACTICE_H
