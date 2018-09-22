#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "structAlumno.h"
#include "menuSystem.h"

#define CANTIDAD 10

int main()
{

    sStudent newStudent[CANTIDAD];

    initializeListStudents(newStudent,CANTIDAD);

    int opcion;
    int auxiliar;
    do
    {
        printListStrings(5,
                         "dar de Alta a un alumno.",
                         "dar de BAJA a un alumno",
                         "modificar un alumno.",
                         "Mostrar todos los alumnos",
                         "Salir.");
        opcion = waitsForMenuInput(5,"Eliga Su Opcion: ");
        switch(opcion)
        {
        case 0:
            auxiliar = buscarLibre(newStudent, CANTIDAD);
            cargarAlumno(&newStudent[auxiliar]);
            break;
        case 1:
            mostrarAlumno(newStudent[auxiliar]);
            break;
        case 3:
            mostrarListaDeAlumnos(newStudent, CANTIDAD);
        case 4:
            printf("Hasta Luego\n\n");
            break;
        default:
            printf("No Ingreso una Opcion Valida\n");
            break;
        }
        clearConsole();
    }
    while(opcion != 4);
    return 0;
}
