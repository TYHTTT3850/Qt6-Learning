//
// Created by Tyh11 on 25-1-17.
//

#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class myWidget; }
QT_END_NAMESPACE

class myWidget : public QWidget {
Q_OBJECT

public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget() override;

private:
    Ui::myWidget *ui;
};


#endif //MYWIDGET_H
