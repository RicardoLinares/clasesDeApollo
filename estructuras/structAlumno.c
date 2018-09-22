#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "structAlumno.h"
//#include "VALIDATIONS.H"

static int generateNextId(void)
{
    static int id;
    id++;
    return id;
}

void newLegajo(sStudent* student, char mensaje[])
{
    char buffer[1024];
    int i;
    int invalido;
    do
    {
        printf("%s", mensaje);
        __fpurge(stdin);
        fgets(buffer,1024,stdin);
        for(i=0; i<1024; i++)
        {
            if(buffer[i] == '\n')
            {
                if(strlen(buffer) == 0)
                {
                    invalido = 1;
                }
                else
                {
                    invalido = 0;
                }
                break;
            }
            if(!(buffer[i] >= 0 && buffer[i] <= 9))
            {
                invalido = 1;
            }
        }
    }
    while(invalido == 1);
    student->legajo = atoi(buffer);
}


void newName(sStudent* student, char mensaje[])
{
    char buffer[1024];
    int index;
    printf("%s", mensaje);
    __fpurge(stdin);
    fgets(buffer, 1024, stdin);

    for(index = 0; index < 1024; index++)
    {
        if(buffer[index] == '\n')
        {
            buffer[index] = '\0';
        }
    }

    while(strlen(student->nombre) > TAM_NOMBRE-1)
    {
        printf("Error El nombre tiene demaciado carateres");
        printf("%s", mensaje);
        __fpurge(stdin);
        fgets(buffer, 1024, stdin);
    }

    strcpy(student->nombre, buffer);

}


void newNote(sStudent* student, char mensaje[])
{
    printf("%s", mensaje);
    __fpurge(stdin);
    scanf("%d", &student->nota);
}


void newAltura(sStudent* student, char mensaje[])
{
    printf("%s", mensaje);
    __fpurge(stdin);
    scanf("%f", &student->altura);
}

void cargarAlumno(sStudent* student)
{
    student->id =generateNextId();
    newAltura(student, "Ingrese la Altura:");
    newNote(student, "Ingrese la nota: ");
    newName(student, "Ingrese el nombre: ");
    newLegajo(student, "Ingrese el legajo: ");
    student->estado = 1;

}

void mostrarAlumno(sStudent alumno)
{
    printf("%d--%s--%f--%d\n", alumno.legajo, alumno.nombre, alumno.altura, alumno.nota);
}

void cargarListaDeAlumnos(sStudent studentList[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cargarAlumno(&studentList[i]);
    }
}
;
// tambien crear un menu;
// hacer una funcion que busque un alumno por legajo
// mostrar un grilla de alumnos
// buscar el alumno
// mostrar el alumno
// pedir nueva nota
// preguntar si esta seguro de realizar los cambios
//if si la asigno
//else aviso que cancelo la modificacion
// si no se encuetra tonses mandar un error
int buscarLibre(sStudent listStudents[], int size)
{
    int retorno = -1;
    int i;
    for(i=0; i<size; i++)
    {
        if(listStudents[i].estado == -1)
        {
            retorno = i;
            break;
        }
    }

    return retorno;
}
void initializeListStudents(sStudent listStudents[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        listStudents[i].estado = -1;
    }
}

void mostrarListaDeAlumnos(sStudent studentList[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(studentList[i].estado != -1)
        {
            mostrarAlumno(studentList[i]);
        }

    }
}

void ordernarAlumnos(sStudent students[], int size)
{
    sStudent auxiliar;
    int i;
    int j;
    if(size > 1)
    {
        for(i=1; i<size; i++)
        {
            auxiliar = students[i];
            for(j=i-1; strcmp(auxiliar.nombre, students[j].nombre) < 0 && j >= 0; j--)
            {
                students[j+1] = students[j];
            }
            students[j+1] = auxiliar;
        }
    }
}
