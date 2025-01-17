//
// Created by Tyh11 on 25-1-17.
//

#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget> //包含 QWidget 窗口类头文件

//声明一个名字空间，包含一个类 myWidget。这个类不是此文件中定义的，而是在ui_mywidget.h文件中定义的的。
QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget {
Q_OBJECT //Q_Object宏，允许类使用信号和槽的机制

public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget() override;

private:
    Ui::myWidget *ui;
};


#endif //MYWIDGET_H
