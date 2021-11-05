#include <QApplication>
#include "gridLayout.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto calc = new calculator();
    calc->show();
    return a.exec();
}
