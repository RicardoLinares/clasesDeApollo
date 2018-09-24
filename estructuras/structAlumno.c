#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "structAlumno.h"
#include "menuSystem.h"
//#include "VALIDATIONS.H"

static int generateNextId(void)
{
    static int id;
    id++;
    return id;
}

void newName(char nombre[], char mensaje[], int confirmacion)
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

    while(strlen(buffer) > TAM_NOMBRE-1)
    {
        printf("Error El nombre tiene demaciado carateres\n");
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
    }
    if(confirmacion)
    {
        strcpy(nombre, buffer);
    }
}


int newNote(char mensaje[],int confirmacion)
{
    char buffer[1024];
    int i;
    int auxiliar;
    int invalido;
    int cifras;
    int comaFlag = 0;
    do
    {
        printf("%s", mensaje);
        __fpurge(stdin);
        fgets(buffer,1024,stdin);
        cifras = strlen(buffer);
        invalido = 0;

        for(i=0; i<1024; i++)
        {
            if(buffer[i] == '\n')
            {
                if(cifras < 2 || cifras > 3)
                {
                    printf("ERROR: el numero tiene que ser entre 0 y 10\n");
                    invalido = 1;
                }
                break;
            }
            if(buffer[i] =='.')
            {
                if(comaFlag == 0)
                {
                    comaFlag = 1;
                    continue;
                }
                else
                {
                    invalido = 1;
                    break;
                }
            }
            if(!(buffer[i] >= '0' && buffer[i] <= '9'))
            {

                printf("ERROR: Usted ingreso un caracter invalido(solo se permiten numeros\n");
                invalido = 1;
                break;
            }
        }
        if(!invalido)
        {
            auxiliar = atoi(buffer);

            if(auxiliar < 0 || auxiliar > 10)
            {
                printf("ERROR: el numero tiene que ser entre 0 y 10");
                invalido = 1;
            }
            else
            {
                invalido = 0;
            }
        }
    }
    while(invalido == 1);

    return auxiliar;
}


float newAltura(char mensaje[], int confirmacion)
{
    char buffer[1024];
    int cifras;
    float auxiliar;
    int i;
    int invalido;

    printf("%s", mensaje);
    __fpurge(stdin);
    fgets(buffer,1024,stdin);

    cifras = strlen(buffer);
    for(i=0; i<1024; i++)
    {
        if(buffer[i] == '\n')
        {
            if(cifras == 0)
            {
                printf("ERROR: el numero no tiene cifras\n");
                invalido = 1;
            }
            break;
        }
        if((buffer[i] >= '0' && buffer[i] <= '9') && buffer[i] == '.')
        {

            printf("ERROR: Usted ingreso un caracter invalido(solo se permiten numeros)\n");
            invalido = 1;
            break;
        }
    }

    if(!invalido)
    {
        auxiliar = atoi(buffer);

        if(auxiliar <= 0)
        {
            printf("ERROR: el numero no puede ser negativo o cero");
            invalido = 1;
        }
        else
        {
            invalido = 0;
        }
    }
    return auxiliar;
}

void cargarAlumno(sStudent* student)
{
    char buffer[1024];
    int notaAuxiliar;
    int alturaAuxiliar;
    int opcion;
    alturaAuxiliar = newAltura("Ingrese la Altura:", 0);
    notaAuxiliar = newNote("Ingrese la nota: ", 0);
    newName(buffer, "Ingrese el nombre: ", 0);

    printf("%d--%s--%f--%d\n", student->legajo, buffer, alturaAuxiliar, notaAuxiliar);
    printf("Esta SEGURO que estos son los datos correctos(y): ");
    __fpurge(stdin);
    opcion = getchar();
    opcion = tolower(opcion);

    if(opcion == 'y')
    {
        student->altura = alturaAuxiliar;
        strcpy(student->nombre, buffer);
        student->nota = notaAuxiliar;
        student->legajo = generateNextId();
        student->estado = 1;
    }
    else
    {
        printf("Se cancelo la operacion");
    }
    mostrarAlumno(*student);
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

int buscarAlumnoPorLegajo(sStudent listaDeAlumnos[], int size)
{
    int auxiliar;
    int retorno = -1;
    int validoFlag;
    int encontadoFLag;
    int i;
    do
    {
        printf("Ingrese el numero de legajo del alumno: ");
        __fpurge(stdin);
        if(scanf("%d", &auxiliar))
        {
            if(auxiliar<=0)
            {
                validoFlag = 0;
            }
            else
            {
                validoFlag = 1;
            }
        }
        else
        {
            validoFlag = 0;
        }

        if(validoFlag == 0)
        {
            printf("Error: Numero de Legajo invalido(Tiene que ser natural mayor a 0).\n");
        }

    }
    while(validoFlag == 0);


    for(i=0; i < size; i++)
    {
        if(listaDeAlumnos[i].legajo == auxiliar && listaDeAlumnos[i].estado == 1)
        {
            mostrarAlumno(listaDeAlumnos[i]);
            retorno = i;
            break;
        }
    }
    return retorno;
}


int modificarAlumno(sStudent alumno)
{
    int opcion;
    int operacion;
    char buffer[1024];
    printListStrings(3,
                     "Cambiar Altura",
                     "Cambiar Nombre",
                     "Cambiar Nota");
    opcion = waitsForMenuInput(5,"Eliga Su Opcion: ");
    switch(opcion)
    {
    case 0:
        newAltura(&alumno, "Ingrese la nueva altura: ");
        break;
    case 1:
        newName(buffer, "Ingrese el nuevo nombre: ", 1);
        break;
    case 2:
        newNote(&alumno, "Ingrese la nueva nota: ");
        break;
    default:
        break;
    }
    if(operacion == 0)
    {
        printf("Se cancelo la modificacion...");
    }

    return operacion;
}

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
