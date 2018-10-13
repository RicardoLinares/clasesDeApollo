/**
*A) La función tendrá el siguiente prototipo:
*
*int loadPerson(struct S_Person* pPerson);
*
*B) La función deberá devolver un 1 si los datos ingresados son
*   correctos, y un 0 si no lo son.
*
*C) Hacer otra función que reciba un puntero a la estructura e
*   imprima por pantalla los datos, el prototipo es:
*
*   void printPerson(struct S_Person* pPerson);
*
*D) Escribir un programa para probar las funciones.
*/


#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
int main()
{
    int proceso;

    S_Person newGuy;

    S_Person* punteroGuy = &newGuy;

    proceso = loadPerson(punteroGuy);


    if(proceso != -1)
    {

        printPerson(punteroGuy);

    }
    else
    {
        printf("NO INGRESO DATOS VALIDOS");
    }



    return 0;
}
