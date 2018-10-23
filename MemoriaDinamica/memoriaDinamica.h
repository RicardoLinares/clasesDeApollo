#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#ifndef MEMORIADINAMICA_H_INCLUDED
#define MEMORIADINAMICA_H_INCLUDED
typedef struct
{
    int entero;
    char caracter;
}eDato;

void mostrarDatos(eDato);

eDato* newDato(int,char);

char* getDynamicString(int);

eDato* newDatoArray(int);

char* retractString(char*,int);

int mostrarArray(eDato*, int);

eDato* newDatoVacio();
#endif // MEMORIADINAMICA_H_INCLUDED
