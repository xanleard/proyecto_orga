#include "tree.h"
#include "ui_tree.h"

Tree::Tree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tree)
{
    ui->setupUi(this);
}

Tree::~Tree()
{
    delete ui;
}

void Tree::on_pushBack_clicked()
{
    close();
}
