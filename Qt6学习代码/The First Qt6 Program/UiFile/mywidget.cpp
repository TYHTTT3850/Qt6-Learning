//
// Created by Tyh11 on 25-1-17.
//

// You may need to build the project (run Qt uic code generator) to get "ui_myWidget.h" resolved

#include "mywidget.h"
#include "ui_myWidget.h"


myWidget::myWidget(QWidget *parent) :
    QWidget(parent), ui(new Ui::myWidget) {
    ui->setupUi(this);
}

myWidget::~myWidget() {
    delete ui;
}
