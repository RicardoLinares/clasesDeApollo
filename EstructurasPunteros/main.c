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
    int i;
    S_Person newGuy[2] = {{"Ricardo", 19, 200000}, {"Leamdro", 18, 200001}};

    S_Person* punteroGuy = newGuy;

    //  OPERADORES: * inaxexo ej (*punteroGuy).edad
    //              -> FLECHA ej punteroGuy->edad
    //  ARIMETICA:  (*punteroGuy).edad = se ve el dato edad de la estructura apuntanda
    //              (*(punteroGuy+i)).edad = se ve el dado edad de el el elmento I apuntando.
    //              puntero->edad = se ve el dadot de la entrucutra apuntada
    //              (puntroguy+i)->edad = se v el dato de el elemento I apuntado,
    for(i=0; i < 2; i++)
    {
        printf("Nombre: %s\n", (punteroGuy+i)->nombre);
        printf("Edad: %d\n",  (punteroGuy+i)->edad);
        printf("D.N.I: %d\n", (punteroGuy+i)->dni);
    }



    //proceso = loadPerson(punteroGuy);
    //int x = 20;


    //*punteroGuy.edad = x;
    //(*punteroGuy).edad = x;


    return 0;
}
