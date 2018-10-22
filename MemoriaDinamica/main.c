#include <stdio.h>
#include <stdlib.h>
#include "memoriaDinamica.h"

/**
 * malloc: tipo* puntero = (puntero*)malloc(sizeof(tipo));
 *
 * realloc: tipo* auxPuntero = (tipo*)realloc(puntero,sizeof(tipo)*100)
 *
 * free: free(puntero)
 */

int main()
{
    int* pEntero;
    int* auxiliar;
    eDato* puntero;
    int i;
    pEntero = (int*)malloc(sizeof(int)*5);
    if(pEntero != NULL)
    {
        for(i=0; i<5; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d",pEntero+i);
        }

        for(i=0; i<5; i++)
        {
            printf("--%d--", *(pEntero+i));
        }
    }
    // busca un espacio en memoria para el nuevo tamaño y libera el anterior
    // crea gestionar memoria y liberar
    auxiliar = (int*)realloc(pEntero,sizeof(int)*10);
    if(auxiliar != NULL)
    {
        free(pEntero);
        pEntero = auxiliar;
        for(i=0; i<10; i++)
        {
            printf("ingrese un numero: ");
            scanf("%d",pEntero+i);
        }

        for(i=0; i<10; i++)
        {
            printf("--%d--", *(pEntero+i));
        }
    }
    //puntero = newDato(2,'F');
    //printf("%d\n", puntero->a);
    //printf("%c\n", puntero->b);


    return 0;
}
