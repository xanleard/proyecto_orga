#include "addfile.h"
#include "ui_addfile.h"

Addfile::Addfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Addfile)
{
    ui->setupUi(this);
}

Addfile::~Addfile()
{
    delete ui;
}

void Addfile::on_pushBack_clicked()
{
    close();
}
