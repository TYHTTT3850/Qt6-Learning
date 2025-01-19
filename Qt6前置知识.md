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

信号（signal）是在特定情况下被发射的通知。信号可以看作特殊的函数。

槽（slot）是对信号进行响应的函数，槽就是函数，所以也称为槽函数。

信号与槽关联是用函数 `QObject::connect()` 实现的，使用函数 `connect()` 的基本格式如下：

```cpp

QObject::connect(sender, SIGNAL(signal()), receiver, SLOT(slot()));

```

connect()是 QObject 类的一个静态函数，而 QObject 是大部分 Qt 类的基类，在实际调用时可
以忽略前面的限定符部分，所以可以直接写为：

```cpp

connect(sender, SIGNAL(signal()), receiver, SLOT(slot()));

```

其中，`sender` 是发射信号的对象的名称；`signal()` 是信号，有参数时还需要指明各参数类型，但不用指明参数名称；`receiver` 是接收信号的对象的名称；`slot()` 是槽函数，有参数时还需要指明各参数类型，但不用指明参数名称。`SIGNAL` 和 `SLOT` 是 Qt 的宏，分别用于指明信号和槽函数。

信号和槽函数的使用有以下几个规则：

1、一个信号可以连接多个槽函数。当一个信号与多个槽函数关联时，槽函数按照建立连接时的顺序依次运行。

2、多个信号可以连接同一个槽函数。

3、一个信号可以连接另一个信号。这样，当发射一个信号时，也会发射另一个信号，以实现某些特殊的功能。例如：

```cpp

connect(sender, SIGNAL(signal_1()), receiver, SIGNAL(signal_2()))

```

4、严格的情况下，信号与槽的参数个数和类型需要一致，至少信号的参数不能少于槽的参数。如果参数不匹配，会出现编译错误或运行错误。

5、在使用信号与槽的类中，必须在类的定义中插入宏Q_OBJECT。






