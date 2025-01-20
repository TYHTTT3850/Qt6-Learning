#include "Widget.h"
#include "ui_Widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    connect(ui->sender_button1, SIGNAL(clicked()), this, SLOT(getTheSignal()));
    connect(ui->sender_button2, SIGNAL(clicked()), this, SLOT(getTheSignal()));
    connect(ui->sender_button3, SIGNAL(clicked()), this, SLOT(getTheSignal()));
    connect(ui->sender_button4, SIGNAL(clicked()), this, SLOT(getTheSignal()));
}

Widget::~Widget() {
    delete ui;
}

void Widget::getTheSignal() {
    QPushButton *sender_button = qobject_cast<QPushButton *>(sender());
    qDebug() << sender_button->text();
}
