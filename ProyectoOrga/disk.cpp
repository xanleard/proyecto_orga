#include "disk.h"

Disk::Disk()
{

}

Disk::Disk(string disk_name, long size_disk, long size_of_block)
{
    disksizeGB = size_disk;
    disksizebyte = (disksizeGB*1024)*1024;
    size_blocks = size_of_block;
    cant_blocks = disksizebyte / size_blocks;
    //char blocks[size_blocks];
    blocks = new char[size_blocks];

    memset(blocks,'0',size_blocks);
    string disk = disk_name + ".dat";
    ofstream d(disk.c_str(), ios::binary);
    d.seekp(0,ios::beg);

    for(int i=0; i<cant_blocks; i++)
    {
        d.write(blocks,size_blocks);
    }

    //char x = 'a';
    //d.write(&x,disksizebyte);

    cout<<"Sizeof blocks"<<endl;
    cout<<disksizebyte<<endl;
    d.close();
}

/*
void Disk::crearDisk(string disk_name, int size_disk, int size_of_blocks)
{
    disksizeGB = size_disk;
    disksizebyte = (disksizeGB*1024)*1024;
    size_blocks = size_of_blocks;
    cant_blocks = disksizebyte / size_blocks;
    blocks = new char[size_blocks];

    memset(blocks,'0',size_blocks);
    string disk = disk_name + ".dat";
    ofstream d(disk, ios::binary);
    d.seekp(0,ios::beg);
    for(int i=0; i<cant_blocks; i++)
    {
        d.write((char*)blocks,sizeof(blocks));
    }
    d.close();

}
/*
Disk::Disk(string disk_name, int size_disk, int size_of_block)
{
    disksizeGB = size_disk;
    disksizebyte = (disksizeGB*1024)*1024;
    size_blocks = size_of_block;
    cant_blocks = disksizebyte/size_blocks;
    blocks = new char[size_of_block];

    memset(blocks,'0',size_blocks);
    string disk = disk_name + ".dat";
    ofstream d(disk, ios::binary);
    d.seekp(0,ios::beg);
    for(int i=0; i<cant_blocks; i++)
    {
    d.write((char*)blocks,sizeof(blocks));
    }
    d.close();
    /*
    d.open(disk,ios::in | ios::out | ios::binary);
    super_block.cant_blocks = cant_blocks;
    super_block.cant_iNodos = (disksizebyte*0.05)/sizeof(iNodos);
    super_block.free_Block = cant_blocks;
    super_block.free_iNodos = super_block.cant_iNodos;
    super_block.free_space = disksizebyte - sizeof(SuperBlock);
    strcpy(super_block.disk_name, disk_name.c_str());
    super_block.disk_size = size_disk;
    super_block.size_Blocks = size_of_block;
    strcpy(super_block.fin, "FIN");
    d.write((char*)&super_block,sizeof(SuperBlock));
    d.close();
    */
//}
