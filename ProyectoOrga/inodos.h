#ifndef INODOS_H
#define INODOS_H
#include <iostream>

using namespace std;


class iNodos
{
public:
    iNodos();
    char per[11];
    char owner[20];
    char group[20];
    int size;
    char fecha[20];
    int links;
    int cantBloques;
    int directorios_Simples[10];
    int inDirecto_Simple;
    int inDirecto_Doble;
    int inDirecto_Triple;
};

#endif // INODOS_H
