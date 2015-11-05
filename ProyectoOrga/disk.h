#ifndef DISK_H
#define DISK_H
#include <iostream>
#include "inodos.h"
#include "filetable.h"
#include "superblock.h"
#include <fstream>
#include <string.h>

using namespace std;

class Disk
{
public:
    Disk();
    Disk(string disk_name, long size_disk, long size_of_block);
    string name;
    long disksizeGB;
    long disksizebyte ;
    long size_blocks;
    long cant_blocks ;
    char *blocks;
    //void crearDisk(string disk_name, int size_disk, int size_of_blocks);
    //SuperBlock super_block;
    //iNodos inodos;

};

#endif // DISK_H
