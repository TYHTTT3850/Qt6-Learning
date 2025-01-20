#ifndef WIDGET_H
#define WIDGET_H

#include <QPushButton>
#include <QWidget>
#include <QDebug>

class Widget : public QWidget {
    Q_OBJECT
public:
    QPushButton *sender_button;
    Widget(QWidget *parent = nullptr):sender_button(new QPushButton("sender_button",this)) {
        sender_button->setObjectName("sender_button");
        connect(sender_button,&QPushButton::clicked,this,&onButtonClicked);
    }
    private slots:
        void onButtonClicked() {
        QPushButton *button = qobject_cast<QPushButton*>(sender());
        qDebug() << "Sender:" << button->objectName();
    }

};

#endif //WIDGET_H
