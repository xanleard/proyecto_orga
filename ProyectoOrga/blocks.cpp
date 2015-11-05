#include "blocks.h"
#include "ui_blocks.h"

Blocks::Blocks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Blocks)
{
    ui->setupUi(this);
}

Blocks::~Blocks()
{
    delete ui;
}

void Blocks::on_pushBack_clicked()
{
    close();
}
