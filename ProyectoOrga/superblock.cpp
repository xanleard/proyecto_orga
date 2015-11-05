#include "superblock.h"

SuperBlock::SuperBlock()
{

}

void SuperBlock::init(string disk_name, unsigned int size_disk, int size_Blocks)
{
    /*
    this->disk_size = size_disk;
    nameToChar(disk_name);
    this->cant_blocks = (size_disk / size_Blocks);
    this->size_Blocks = size_Blocks;
    //this->partition_letter = partition_letter;
    this->cant_iNodos = 100;
    this->bitmap_pos = -1;
    this->inodeTable_pos = -1;
    this->free_Block = 0;
    */
}

void SuperBlock::nameToChar(string nombre)
{
    int tam = nombre.size();
    if(tam  > 8)
        tam -= (tam - 8);

    for(int i=0; i<tam; i++)
    {
        this->disk_name[i] = nombre[i];
    }

    if(tam < 8 )
    {
        for(int i=tam; i<8; i++)
        {
            this->disk_name[i] = '\0';
        }
    }
}

