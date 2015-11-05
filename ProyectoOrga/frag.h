#ifndef FRAG_H
#define FRAG_H

#include <QDialog>

namespace Ui {
class Frag;
}

class Frag : public QDialog
{
    Q_OBJECT

public:
    explicit Frag(QWidget *parent = 0);
    ~Frag();

private slots:
    void on_pushBack_clicked();

private:
    Ui::Frag *ui;
};

#endif // FRAG_H
