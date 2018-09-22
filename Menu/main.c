#include <stdio.h>
#include <stdlib.h>
#include "menuSystem.h"

int main()
{
    int opcion;
    do
    {
        printListStrings(5,
                         "string",
                         "Informacion De la cinta.",
                         "Autor de la pelicula.",
                         "Salas de estreno.",
                         "Salir.");
        opcion = waitsForMenuInput(5,"Eliga Su Opcion: ");
        switch(opcion)
            {
                /*
                Funciones de las opciones
                Un case por cada opcion
                recomendado: Poner un case de salida
                */
                case 4:
                    printf("Hasta Luego\n\n");
                    break;
                default:
                    printf("No Ingreso una Opcion Valida\n");
                    break;
            }
        clearConsole();
    }while(opcion != 4);
    return 0;
}
