#include <QApplication>
#include <QDebug>
#include "Widget.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Widget w;
    w.show();
    return QApplication::exec();
}
