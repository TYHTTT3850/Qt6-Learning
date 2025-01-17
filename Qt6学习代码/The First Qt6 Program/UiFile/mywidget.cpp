//此文件是Ui文件mywidget.ui被UIC编译后生成的文件

#include "mywidget.h"
#include "ui_myWidget.h"


myWidget::myWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::myWidget) {
    ui->setupUi(this);
}

myWidget::~myWidget() {
    delete ui;
}
