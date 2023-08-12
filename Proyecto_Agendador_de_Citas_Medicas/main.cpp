#include "widget.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    std::cout << "Welcome!!" << std::endl;

    Widget w(1, nullptr);
    w.show();


    return a.exec();
}
