#include "frag.h"
#include "ui_frag.h"

Frag::Frag(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Frag)
{
    ui->setupUi(this);
}

Frag::~Frag()
{
    delete ui;
}

void Frag::on_pushBack_clicked()
{
    close();
}
