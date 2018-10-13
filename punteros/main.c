#include <stdio.h>
#include <stdlib.h>
#include "listaNumeros.h"

#define CANTIDAD 10

/**
* escribir 4 funciones que reciban un array de números int y su tamaño, e impriman los números por pantalla.
*
* 1era funcion: Recibe el array como vector y accede a los datos utilizando notación vectorial ([])
*
* 2da funcion: Recibe el array como vector y accede a los datos utilizando aritmetica de punteros
*
* 3era funcion: Recibe el array como puntero y accede a los datos utilizando notación vectorial ([])
*
* 4da funcion: Recibe el array como puntero y accede a los datos utilizando aritmetica de punteros
*/

int main()
{
    int arrayEnteros[CANTIDAD] = {1,2,3,4,5,6,7,8,123,0};


    acederVectorialTrabajoVectorial(arrayEnteros, CANTIDAD);
    printf("\n");
    acederVectorialTrabajoArimetica(arrayEnteros, CANTIDAD);
    printf("\n");
    acederPunteroTrabajoVectorial(arrayEnteros, CANTIDAD);
    printf("\n");
    acederPunteroTrabajoArimatica(arrayEnteros, CANTIDAD);


    printf("Hello world!\n");
    return 0;
}
