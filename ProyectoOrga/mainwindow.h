#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QList>
#include <QString>
#include <iostream>
#include <vector>
#include <QDir>
#include "disk.h"
#include "blocks.h"
#include "tree.h"
#include "frag.h"
#include "desfrag.h"
#include "addfile.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QString terminal;
    QString comands[12];
    void printTerminal();
    void switchComands1(QString comando);
    void switchComands2(QString comando);
    void fDiskD();
    void fDiskN();
    int accion=0;
    int suma ;
    int suma1;
    string nom1;
    vector <Disk> disks;

    ~MainWindow();

private slots:
    void on_pushBlocks_clicked();

    void on_pushTree_clicked();

    void on_pushFrag_clicked();

    void on_pushDesfrag_clicked();

    void on_pushAddFile_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::MainWindow *ui;
    Blocks* blocks;
    Tree* tree;
    Frag* frag;
    Desfrag* desfrag;
    Addfile* addfile;
};

#endif // MAINWINDOW_H
