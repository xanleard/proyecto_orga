#ifndef BLOCKS_H
#define BLOCKS_H

#include <QDialog>

namespace Ui {
class Blocks;
}

class Blocks : public QDialog
{
    Q_OBJECT

public:
    explicit Blocks(QWidget *parent = 0);
    ~Blocks();

private slots:
    void on_pushBack_clicked();

private:
    Ui::Blocks *ui;
};

#endif // BLOCKS_H
