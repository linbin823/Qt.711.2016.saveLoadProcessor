#include "widget.h"
#include <QDebug>
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QJsonObject* _5th = new QJsonObject();
    _5th->insert("5th",QJsonValue("5"));

    QJsonObject* _4th = new QJsonObject();
    _4th->insert("4th",QJsonValue("4"));
    _4th->insert("lower",QJsonValue( *_5th ));

    QJsonObject* _3rd = new QJsonObject();
    _3rd->insert("3rd",QJsonValue("3"));
    _3rd->insert("lower",QJsonValue( *_4th ));

    QJsonObject* _2nd = new QJsonObject();
    _2nd->insert("2nd",QJsonValue("2"));
    _2nd->insert("lower",QJsonValue( *_3rd ));

    QJsonObject* _1st = new QJsonObject();
    _1st->insert("1st",QJsonValue("1"));
    _1st->insert("lower",QJsonValue( *_2nd ));

    QJsonValueRef v = (*_1st)["lower"];

    v = QJsonValue(QString("new One!"));

    list.append(_1st);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
//    QJsonValueRef temp=  obj["text3"];
//    QJsonObject subObj;
//    subObj = temp.toObject().insert("subText1",QJsonValue("jkl"));

//    QJsonValue value = obj["text3"];
//    QJsonObject subObj;
//    subObj = value.toObject();
//    subObj.insert("subText1",QJsonValue("jkl"));
//    obj.insert("text3",QJsonValue(subObj));

    QFile file;
    file.setFileName("config.json");
    file.open(QIODevice::WriteOnly);
    QJsonDocument doc;
    doc.setObject( *list.at(0) );
    QByteArray data = doc.toJson();
    file.write(data);
    file.close();
}
