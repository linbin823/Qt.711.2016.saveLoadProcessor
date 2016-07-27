#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    processor = new loadSaveProcessorXml(this);
    manager = new managerExample(this);

    connect(processor,SIGNAL(msgStateChanged(quint64)),this,SLOT(setState(quint64)));
    connect(processor,SIGNAL(msgErrorSet(quint64)),this,SLOT(setState(quint64)));
    connect(processor,SIGNAL(msgErrorReset(quint64)),this,SLOT(setState(quint64)));
    setState(0);
    updateDisplay();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if( processor->transactionStart() )
        return;
    //qDebug()<<"MainWindow::on_pushButton_clicked 1";
    processor->createNewInstance( QString("managerExample"), QString::number( 1 ) );
    //qDebug()<<"MainWindow::on_pushButton_clicked 2";
    processor->moveToInstance(    QString("managerExample"), QString::number( 1 ) );
    //qDebug()<<"MainWindow::on_pushButton_clicked 3";
    manager->save(processor);
    //qDebug()<<"MainWindow::on_pushButton_clicked 4";
    processor->moveBackToParent();
    //qDebug()<<"MainWindow::on_pushButton_clicked 5";
    processor->saveFile( QFileDialog::getSaveFileName(this, tr("Save File"),
                                                      QDir::currentPath(),
                                                      tr("xml Fille (*.xml)")) );
    //qDebug()<<"MainWindow::on_pushButton_clicked 6";
    processor->transactionEnd();
    //qDebug()<<"MainWindow::on_pushButton_clicked 7";

    updateDisplay();
}

void MainWindow::setState(quint64 state){
    ui->error->setText( processor->getErrorStringList().join(";"));
    ui->state->setText( processor->getStateString());
}

void MainWindow::on_PB_load_clicked()
{
    if( processor->transactionStart() )
        return;
    processor->loadFile( QFileDialog::getOpenFileName(this, tr("Load File"),
                                                      QDir::currentPath(),
                                                      tr("xml Fille (*.xml)"))  );
    //qDebug()<<"MainWindow::on_PB_load_clicked 1";
    processor->moveToInstance( QString("managerExample"), QString::number( 1 ) );
    //qDebug()<<"MainWindow::on_PB_load_clicked 2";
    manager->load( processor );
    //qDebug()<<"MainWindow::on_PB_load_clicked 3";
    processor->moveBackToParent();
    //qDebug()<<"MainWindow::on_PB_load_clicked 4";
    processor->transactionEnd();
    //qDebug()<<"MainWindow::on_PB_load_clicked 5";
    updateDisplay();
}

void MainWindow::updateDisplay(){
    ui->Mpara1->setText( QString::number(manager->para1 ) );
    ui->Mpara2->setText( manager->para2 );
    ui->Mpara3->setText( QString::number(manager->para3 ) );

    ui->Dpara1->setText( QString::number(manager->pDeviceList.at(0)->para1 ) );
    ui->Dpara2->setText( manager->pDeviceList.at(0)->para2 );
    ui->Dpara3->setText( QString::number(manager->pDeviceList.at(0)->para3 ) );
}
