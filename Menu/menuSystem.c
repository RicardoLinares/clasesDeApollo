#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include "menuSystem.h"

int printListStrings(int size, ...)
{
    va_list ap;
    char *auxiliar;
    char option = 'a';
    int i;

    va_start(ap, size);

    for(i=0; i<size; i++)
    {
        auxiliar = va_arg(ap,char *);
        printf("%c) %s\n", option ,auxiliar);
        option++;
    }

    va_end(ap);

    return 0;
}

int waitsForMenuInput(int size, char mensaje[])
{
    int retorno;
    int optionValidationFlag = 0;
    char opcion;
    int i;
    printf("%s", mensaje);
    __fpurge(stdin);
    opcion = getchar();
    opcion = tolower(opcion);

    for(i=0; i<size; i++)
    {
        if(opcion == 'a'+i)
        {
            retorno = i;
            optionValidationFlag = 1;
            break;
        }
    }

    if(optionValidationFlag == 0)
    {
        retorno = -1;
    }
    return retorno;
}

void clearConsole(void)
{
    printf("pulse ENTER para continuar...");
    __fpurge(stdin);
    getchar();
    printf("\033[H\033[J");
}
