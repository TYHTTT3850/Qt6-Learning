//此文件是对应于 mywidget.h 的源程序文件

#include "mywidget.h"
#include "ui_myWidget.h"


myWidget::myWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::myWidget) {
    ui->setupUi(this);
}

myWidget::~myWidget() {
    delete ui;
}
