#include <stdio.h>
#include <stdlib.h>

// 1) declaracion de una funcion//prototipo//firma
// 2) llamada de la funcion
// 3) desarrollo de la funcion

// queDevuelve comoSeLlama (que recibe);

// Si recibe parametros y devuelve un valor
//int Sumar(int, int);
// Si no recibe nada y devuelve nada
//void Sumar(void);
// Si recibe parametros y devuelve nada(Mejor alternativa)
//void Sumar(int, int);
// Si no recibe nada y devuelve un valor
//int Sumar(void);

//Esta es una variable global(nota: esta variable no se usa)
//int global= 5;


int main()
{
    int numeroUno;
    int numeroDos;
    int total;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);
    //------------Tarea--------------
    //total = numeroUno + numeroDos;

    //------------Llamada de la funcion-------------
    // la funcion sumar tiene los parametros actuales
    //----------------------------------------------
    //total = Sumar(numeroUno, numeroDos);
    //Sumar(numeroUno, numeroDos);
    //Sumar();
    //total = Sumar();

    printf("La suma de los dos numeros es : %d", total);
    return 0;
}
/*
funcion que devuelve pero no recibe
int Sumar(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroDos + numeroUno;

    return suma;
}
*/
/*
funcion que recibe pero no devuelve
void Sumar(int sumado, int sumando)
{
    int total;

    total = sumado + sumado;
    printf("La suma de los dos numeros es : %d", total);
}
*/
/*
funcion que no devuelve y no recibe NADA
void Sumar(void)
{
    int numeroUno;
    int numeroDos;
    int total;

    printf("ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    total = numeroUno + numeroDos;

    printf("La suma de los dos numeros es : %d", total);
}
*/


/* funcion que recibe y devuelve
int Sumar(int sumando, int sumado)// la funcion tiene los parametros formales
{
    //variables local
    int resultado;
    resultado = sumado + sumando;

    return resultado;
}
*/
