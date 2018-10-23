#include <stdio.h>
#include <stdlib.h>
#include "memoriaDinamica.h"
#define T 3
/**
 * malloc: tipo* puntero = (puntero*)malloc(sizeof(tipo));
 *
 * realloc: tif(pDatoNuevo != NULL)
    {
        printf("%d\n", pDatoNuevo->a);
        printf("%c\n", pDatoNuevo->b);
    }ipo* auxPuntero = (tipo*)realloc(puntero,sizeof(tipo)*100)
 *
 * free: free(puntero)
 */

int main()
{
    /*
    int* pEntero;
    int* auxiliar;
    */
    eDato* pDatoNuevo;
    eDato* pDatoArray;

    /*
    int i;
    pEntero = (int*)malloc(sizeof(int)*5);
    if(pEntero != NULL)
    {

    }

    // busca un espacio en memoria para el nuevo tamaño y libera el anterior
    // crea gestionar memoria y liberar
    auxiliar = (int*)realloc(pEntero,sizeof(int)*10);
    if(auxiliar != NULL)
    {
        free(pEntero);
        pEntero = auxiliar;
    }
    */
    pDatoNuevo = newDato(2,'F');
    if(pDatoNuevo != NULL)
    {
        mostrarDatos(pDatoNuevo))
    }
    pDatoArray = newDatoArray(T);
    if(pDatoArray != NULL)
    {
        mostrarArray(pDatoArray,T);
    }


    return 0;
}
