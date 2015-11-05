#ifndef FILETABLE_H
#define FILETABLE_H
#include <iostream>

using namespace std;


class FileTable
{
public:
    FileTable(int iNodo_indx);
    char file_name[30];
    int iNodo_index;
};

#endif // FILETABLE_H
