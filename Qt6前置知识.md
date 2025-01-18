# Qt6 工程介绍

`Qt Widgets Application` ：创建图形化用户界面的传统桌面程序。

`Qt Console Application` ：创建没有图形用户界面的控制台应用程序。

一般使用`Qt Widgets Application`。

# Qt6 Ui 类

创建 Ui 类时主要有三种基类。

1、 `QWidget` ：所有界面组件类的基类，QWidget可以作为独立的窗口，就是一个空白的窗口。

2、 `QMainWindow` ：主窗口类，具有菜单栏，工具栏，状态栏。

3、 `QDialog` ：对话框类，具有对话框的显示效果，例如没有最大化按钮。

# Qt6 其余类汇总

1、 `QApplication` ：每个 Qt GUI 应用程序必须创建一个 QApplication 对象，它管理应用程序的控制流和主要设置。

2、 `QLabel,QLineEdit,QPushButton,QComboBox` ：常见的GUI空间类，分别用于显示文本、接收用户输入、创建按钮和下拉列表

3、 `QLaylout` ：用于管理控件在窗口中的布局。

4、 `QMessageBox` ：用于显示消息对话框，如：错误消息、警告消息等。

5、 `QFile,QFileInfo,QDir` ：用于文件和目录的操作。 `QFile` 提供了对文件的读写操作。 `QFileInfo` 提供了与文件有关的信息，如：文件名、路径、大小等。 `QDir` 提供了对目录的操作，如列出目录中的文件和子目录、创建、删除、重命名目录、遍历目录结构等。

6、 `QDataStream,QTextStream` : 用于读取二进制和文本数据，提供了方便的格式化功能。

7、 `QTimer` ：用于创建定时器，可以在指定时间间隔内触发指定事件。

8、 `QThread` ：用于创建和管理线程，实现多线程编程。

9、 `QNetworkAccessManager` ：用于处理网络请求，如 HTTP 请求，支持网络编程。

10、 `QSqlQuery,QsqlDatabase` ：用于数据库操作，如 SQL 查询、管理数据库连接等。

11、 `QSetting` ：用于读取和写入应用程序设置，支持多种存储格式，如 INI 文件，注册表等。

12、 `QEvent` ：是所有事件对象的基类，Qt 中的事件处理机制基于这个类。


