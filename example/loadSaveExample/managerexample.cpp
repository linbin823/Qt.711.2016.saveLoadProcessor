#include "managerexample.h"

managerExample::managerExample(QObject *parent ):baseDevice(parent)
{
    for(int i=0; i<=5; i++){
        deviceExample* temp = new deviceExample(this);
        pDeviceList.append(temp);
    }
    para1 = 12;
    para2 = "sdsd";
    para3 = 23.2314;
}

int managerExample::load(iLoadSaveProcessor *processor){
    QString value;
    bool ok;
    processor->loadParameters( QString("para1") , &value );
    para1 = value.toInt( &ok, 10);
    //qDebug()<<value<<para1<<ok;
    processor->loadParameters( QString("para2") , &value );
    para2 = value;
    processor->loadParameters( QString("para3") , &value );
    para3 = value.toFloat( &ok );
    //qDebug()<<value<<para3;

    for(int i=0; i<=10; i++){
        int ret = processor->moveToInstance( QString("deviceExample") , QString::number( i ) );
        if(ret != 0) continue;
        pDeviceList.at(i)->load( processor );
        processor->moveBackToParent();
    }
    return 0;

}

int managerExample::save(iLoadSaveProcessor *processor){
    //qDebug()<<"managerExample::save"<<QString("para1")<<QString::number( para1 );
    processor->saveParameters( QString("para1"), QString::number( para1 ) );
    processor->saveParameters( QString("para2"), para2 );
    processor->saveParameters( QString("para3"), QString::number( para3 ) );

    for(int i=0; i<=5; i++){
        processor->createNewInstance( QString("deviceExample") , QString::number( i ) );
        processor->moveToInstance( QString("deviceExample") , QString::number( i ) );
        pDeviceList.at(i)->save( processor );
        processor->moveBackToParent();
    }
    return 0;
}
