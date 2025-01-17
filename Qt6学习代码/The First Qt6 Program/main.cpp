#include <QApplication> //包含应用程序类的头文件
#include "UiFile/mywidget.h"
#include "UiFile/ui_myWidget.h"

//main：程序的入口。argc：命令行变量的数量。argv：命令行变量的数组。
int main(int argc, char *argv[]) {

    //a：应用程序对象，在Qt中，应用程序对象有且仅有一个。
    QApplication a(argc, argv);

    //创建窗口对象
    myWidget w;

    //窗口对象默认不会显示，必须调用show方法
    w.show();

    //让应用程序对象进入事件循环，让程序不会一闪而过
    return QApplication::exec();
}
