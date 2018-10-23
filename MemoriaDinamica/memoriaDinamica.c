#include "memoriaDinamica.h"

// * INDIRECCION O INACEXO

void mostrarDatos(eDato* datos)
{
    printf("%d\n", datos->entero);
    printf("%c\n", datos->caracter);
}

int mostrarArray(eDato* listaDatos, int size)
{
    int retorno = -1;
    int i;

    if(listaDatos != NULL && size > 0)
    {
        for(i=0;i<size;i++)
        {
            mostrarDatos(*(listaDatos+i));
        }
    }



    return retorno;
}

eDato* newDatoVacio()
{
    eDato* pDato;
    pDato = (eDato*) malloc(sizeof(pDato)); // trabajando con heap o monto
    if(pDato != NULL)
    {
        pDato->caracter = ' ';
        pDato->entero = 0;
    }

    return pDato;
}

eDato* newDato(int entero, char caracter)
{
    eDato* pDato;
    pDato = (eDato*) malloc(sizeof(pDato)); // trabajando con heap o monto
    if(pDato != NULL)
    {
        pDato->caracter = caracter;
        pDato->entero = entero;
    }

    return pDato;
}
eDato* newDatoArray(int size)
{

    int i;
    eDato* pDato;
    pDato = (eDato*) malloc(sizeof(pDato) * size); // trabajando con heap o monto
    if(pDato != NULL)
    {
        for(i=0; i<size; i++)
        {
            printf("ingrese un numero: ");
            fflush(stdin);
            scanf("%d",&((pDato+i)->entero));
            printf("ingrese un caracter: ");
            fflush(stdin);
            (pDato+i)->caracter = getchar();

        }
    }

    return pDato;
}
char* getDynamicString(int size)
{
    char* auxiliar;

    auxiliar = malloc(sizeof(char)*size);
    if(auxiliar != NULL)
    {
        printf("Ingresar cadena : ");
        gets(auxiliar);
    }
    return auxiliar;
}

char* retractString(char* string,int size)
{
    char* auxiliar;

    auxiliar = realloc(string, sizeof(char)*size);
    if(auxiliar != NULL)
    {
        *(auxiliar+size-1) = '\0';
    }
    return auxiliar;
}
