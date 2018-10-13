#include "listaNumeros.h"
int acederVectorialTrabajoVectorial(int lista[], int limite)
{
    int retorno = -1;
    int i;

    if(lista != NULL && limite > 0)
    {
        retorno = 0;
        for(i=0; i < limite; i++)
        {
            printf("Vectorial y notacion vectorial: %d\n", lista[i]);
        }
    }
    return retorno;
}

int acederVectorialTrabajoArimetica(int lista[], int limite)
{
    int retorno = -1;
    int i;

    if(lista != NULL && limite > 0)
    {
        retorno = 0;
        for(i=0; i < limite; i++)
        {
            printf("Vectorial y Arimatica De punteros: %d\n", *(lista+i));
        }
    }
    return retorno;
}

int acederPunteroTrabajoVectorial(int* lista, int limite)
{
    int retorno = -1;
    int i;

    if(lista != NULL && limite > 0)
    {
        retorno = 0;
        for(i=0; i < limite; i++)
        {
            printf("puntero y notacion vectorial: %d\n", lista[i]);
        }
    }
    return retorno;
}

int acederPunteroTrabajoArimatica(int* lista, int limite)
{
    int retorno = -1;
    int i;

    if(lista != NULL && limite > 0)
    {
        retorno = 0;
        for(i=0; i < limite; i++)
        {
            printf("puntero y arimetica punteros: %d\n", *(lista+i));
        }
    }

    return retorno;
}
