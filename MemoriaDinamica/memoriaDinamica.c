#include "memoriaDinamica.h"


char* getDynamicString(int size)
{
    char* auxiliar;

    auxiliar = malloc(sizeof(char)*size);
    if(auxiliar != NULL)
    {
        printf("Ingresar cadena : ");
        gets(auxiliar);
    }
    return auxiliar;
}

char* retractString(char* string,int size)
{
    char* auxiliar;

    auxiliar = realloc(string, sizeof(char)*size);
    if(auxiliar != NULL)
    {
        *(auxiliar+size-1) = '\0';
    }
    return auxiliar;
}
