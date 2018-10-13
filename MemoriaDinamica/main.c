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
    char* puntero;

    puntero = getDynamicString(1024);
    if(puntero != NULL)
    {
        printf("%s\n", puntero);

        puntero = retractString(puntero,11);
        if(puntero != NULL)
        {
            printf("%s\n", puntero);
        }

    }


    return 0;
}
