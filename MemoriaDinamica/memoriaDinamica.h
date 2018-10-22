#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef MEMORIADINAMICA_H_INCLUDED
#define MEMORIADINAMICA_H_INCLUDED
typedef struct
{
    int a;
    int b;
}eDato;

eDato* newDato(int,char);

char* getDynamicString(int);


char* retractString(char*,int);


#endif // MEMORIADINAMICA_H_INCLUDED
