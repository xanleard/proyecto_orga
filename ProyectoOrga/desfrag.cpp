#include "desfrag.h"
#include "ui_desfrag.h"

Desfrag::Desfrag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Desfrag)
{
    ui->setupUi(this);
}

Desfrag::~Desfrag()
{
    delete ui;
}

void Desfrag::on_pushBack_clicked()
{
    close();
}
