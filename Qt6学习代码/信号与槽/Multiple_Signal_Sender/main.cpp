#include <QApplication>
#include "UiFile/widget.h"
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return QApplication::exec();
}