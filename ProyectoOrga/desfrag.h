#ifndef DESFRAG_H
#define DESFRAG_H

#include <QDialog>

namespace Ui {
class Desfrag;
}

class Desfrag : public QDialog
{
    Q_OBJECT

public:
    explicit Desfrag(QWidget *parent = 0);
    ~Desfrag();

private slots:
    void on_pushBack_clicked();

private:
    Ui::Desfrag *ui;
};

#endif // DESFRAG_H
