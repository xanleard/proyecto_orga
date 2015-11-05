#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdir.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setFrame(false);
    ui->lineEdit->setFocus();
    QDir().mkdir("MyFolder");
}

void MainWindow::printTerminal()
{
    ui->listWidget->addItem(terminal);
    ui->listWidget->scrollToBottom();
}

void MainWindow::switchComands1(QString comando)
{
    QString invalid = "Ese comando es invalido";

    if(comando == "fdiskD")
    {
        fDiskD();
    }else if(comando == "fdiskN")
    {
        //fDiskN();
        accion = 1;
        on_lineEdit_returnPressed();

    }
}

void MainWindow::switchComands2(QString comando)
{

}

void MainWindow::fDiskD()
{
    // Muestra informacion del disco {nombre};
    QString requisito = "Ingrese el nombre o la letra del disco";
    ui->listWidget->addItem(requisito);
}

void MainWindow::fDiskN()
{
    QString nomb = "Ingrese el nombre del disco, tamaño y tamaño de bloque";
    ui->listWidget->addItem(nomb);

    /*
    QString tamdisk = "Ingrese el tamaño del disco";
    ui->listWidget->addItem(tamdisk);

    QString tamblock = "Ingrese el tamaño del bloque";
    ui->listWidget->addItem(tamblock);
    */

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushBlocks_clicked()
{
    this->blocks = new Blocks();
    this->blocks->show();
}

void MainWindow::on_pushTree_clicked()
{
    this->tree = new Tree();
    this->tree->show();
}

void MainWindow::on_pushFrag_clicked()
{
    this->frag = new Frag();
    this->frag->show();
}

void MainWindow::on_pushDesfrag_clicked()
{
    this->desfrag = new Desfrag();
    this->desfrag->show();
}

void MainWindow::on_pushAddFile_clicked()
{
    this->addfile = new Addfile();
    this->addfile->show();
}

void MainWindow::on_lineEdit_returnPressed()
{
    if(accion == 0)
    {        
        terminal = ui->lineEdit->text();
        ui->lineEdit->clear();
        if(terminal.isEmpty())
            return;

        printTerminal();
        switchComands1(terminal);

    }else if (accion == 1){
        fDiskN();
        QStringList listparam ;
        terminal = ui->lineEdit->text();
        if(terminal.isEmpty())
            return;

        listparam = terminal.split(",");
        ui->listWidget->addItems(listparam);
        QString nom;
        QString tamdisco ;
        QString tam ;
        for(int i=0; i<listparam.size(); ++i)
        {
           if(i==0)
           {
               nom = listparam.at(i);
           }else if(i == 1){
               tamdisco = listparam.at(i);
           }else{
               tam = listparam.at(i);
           }

        }
         nom1 = nom.toStdString();
         cout<< nom1 <<endl;
         suma = tamdisco.toLong();
         cout<<suma << endl;
         suma1 =  tam.toLong();
         cout<<suma1<<endl;
        /*
        ui->listWidget->addItem(nom);
        ui->listWidget->addItem(tamdisco);
        ui->listWidget->addItem(tam);
        */
        ui->lineEdit->clear();
        disks.push_back(Disk(nom1,suma,suma1));

        accion = 0;
        switchComands1(terminal);

    }
}
