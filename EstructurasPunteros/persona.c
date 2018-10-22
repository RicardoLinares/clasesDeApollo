#include "persona.h"


int loadPerson(S_Person* persona)
{
    int retorno = -1;
    int proceso;
    if(persona != NULL)
    {
        fflush(stdin);
        proceso = putLineInString(persona->nombre, NOMBRES,"Ingresar Nombre: ");
        if(proceso != -1)
        {
            printf("Ingresar Edad: ");
            fflush(stdin);
            if((scanf("%d", &(persona->edad))))
            {

                printf("Ingresar DNI: ");
                fflush(stdin);
                if((scanf("%d", &(persona->dni))))
                {
                    retorno = 0;
                }
            }
        }

    }
    return retorno;
}



void printPerson(S_Person* persona)
{
    printf("Nombre: %s\n", (*(persona)).nombre);
    printf("Edad: %d\n", (*(persona)).edad);
    printf("D.N.I: %d\n", (*(persona)).dni);
}
