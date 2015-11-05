#ifndef SUPERBLOCK_H
#define SUPERBLOCK_H
#include <iostream>

using namespace std;


class SuperBlock
{
public:
    SuperBlock();
    void init(string disk_name, unsigned int size_disk, int size_Blocks);
    void nameToChar(string nombre);
    char disk_name[10];
    unsigned int disk_size;
    int free_space;
    int cant_blocks; // Cantidad de bloques totales
    int free_Block; // Cantidad de bloques disponibles
    int size_Blocks; // tamaño de cada bloque
    int cant_iNodos; // cantidad total de iNodos
    int free_iNodos; // cantidad de iNodos disponibles
    char fin[3];

};

#endif // SUPERBLOCK_H
