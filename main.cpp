#include "MyOwnQtPractice.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyOwnQtPractice w;
    w.show();
    return a.exec();
}
