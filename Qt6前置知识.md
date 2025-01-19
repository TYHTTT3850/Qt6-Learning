# Qt6 工程介绍

`Qt Widgets Application` ：创建图形化用户界面的传统桌面程序。

`Qt Console Application` ：创建没有图形用户界面的控制台应用程序。

一般使用`Qt Widgets Application`。

# Qt6 Ui 类

创建 Ui 类时主要有三种基类。

1、 `QWidget` ：所有界面组件类的基类，QWidget可以作为独立的窗口，就是一个空白的窗口。

2、 `QMainWindow` ：主窗口类，具有菜单栏，工具栏，状态栏。

3、 `QDialog` ：对话框类，具有对话框的显示效果，例如没有最大化按钮。

# 信号与槽

信号与槽是 Qt 编程的基础，也是 Qt 的一大创新。有了信号与槽的编程机制，在 Qt 中处理界
面上各个组件的交互操作就变得比较直观和简单。

信号（signal）是在特定情况下被发射的通知。

槽（slot）是对信号进行响应的函数，槽就是函数，所以也称为槽函数。

信号与槽关联是用函数 `QObject::connect()` 实现的，使用函数 `connect()` 的基本格式如下：

```cpp

QObject::connect(sender, SIGNAL(signal()), receiver, SLOT(slot()));

```