//
// Created by Tyh11 on 25-1-17.
//

#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget> //包含 QWidget 窗口类头文件


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
