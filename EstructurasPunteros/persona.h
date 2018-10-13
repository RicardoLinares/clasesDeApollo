#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "texto.h"

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#define NOMBRES 51
typedef struct
{
    char nombre[NOMBRES];
    int edad;
    int dni;

}S_Person;


int loadPerson(S_Person*);

void printPerson(S_Person*);
#endif // PERSONA_H_INCLUDED
