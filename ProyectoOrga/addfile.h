#ifndef ADDFILE_H
#define ADDFILE_H

#include <QDialog>

namespace Ui {
class Addfile;
}

class Addfile : public QDialog
{
    Q_OBJECT

public:
    explicit Addfile(QWidget *parent = 0);
    ~Addfile();

private slots:
    void on_pushBack_clicked();

private:
    Ui::Addfile *ui;
};

#endif // ADDFILE_H
