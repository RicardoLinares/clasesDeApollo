#include "memoriaDinamica.h"

// * INDIRECCION O INACEXO





eDato* newDato(int entero, char caracter)
{
    eDato* pDato;
    pDato = (eDato*) malloc(sizeof(pDato)); // trabajando con heap o monto
    if(pDato != NULL)
    {
        pDato->b = caracter;
        pDato->a = entero;
    }

    return pDato;
}
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
