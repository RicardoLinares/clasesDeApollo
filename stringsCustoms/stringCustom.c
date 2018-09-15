#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include <ctype.h>
#include "stringCustom.h"

#define TRUE 1
#define FALSE 0

int putLineInString(char origin[], int size, char mensaje[])
{
    char buffer[1024];
    int index;

    printf("%s", mensaje);

    __fpurge(stdin);

    fgets(buffer, 1024, stdin);


    for(index = 0; index < strlen(buffer); index++)
        {
            if(buffer[index] == '\n')
            {
                buffer[index] = '\0';
            }
        }


    while(strlen(buffer) > size - 1)
    {
        printf("ERROR maximo %d caracteres.\n%s", size - 1,mensaje);
        __fpurge(stdin);
        fgets(buffer, 1024, stdin);
    }
    strcpy(origin,buffer);


    return 0;
}

int fullName(char destination[], char originOne[], char originTwo[])
{
    int operation;

    strcat(destination, originOne);
    strcat(destination, ", ");
    strcat(destination, originTwo);

    operation = 1;

    return operation;

}

int firstUpperCaseAll(char origin[])
{
    int size = strlen(origin) - 1;
    int firstLetterFlag = 1;
    int index;

    for(index = 0; index < size; index++)
    {
        if(origin[index] == ' ')
        {
            firstLetterFlag = 1;
        }
        else if(firstLetterFlag)
        {
            origin[index] = toupper(origin[index]);
            firstLetterFlag = 0;
        }
        else
        {
            origin[index] = tolower(origin[index]);
        }

    }
    return 0;
}


int firstUpperCase(char origin[])
{
    int size = strlen(origin) - 1;
    int firstLetterFlag = 1;
    int index;

    for(index = 0; index < size; index++)
    {
        if(firstLetterFlag)
        {
            origin[index] = toupper(origin[index]);
            firstLetterFlag = 0;
        }
        else
        {
            origin[index] = tolower(origin[index]);
        }

    }
    return 0;
}

int onlyHasLettersAndSpaces(char origin[])
{
    int index;
    int size = strlen(origin) - 1;
    int respuesta = TRUE;
    char buffer[1024];
    strcpy(buffer, origin);

    for(index = 0; index < size; index++)
    {
        buffer[index] = tolower(buffer[index]);

        if((buffer[index] < 'a' || buffer[index] > 'z') && buffer[index] != ' ')
        {
            respuesta = FALSE;
            break;
        }
    }

    return respuesta;
}

int stringHasNumbers(char origin[])
{
    int size = strlen(origin) - 1;
    int index;
    int respuesta = FALSE;

    for(index = 0; index < size; index++)
    {
        if(origin[index] >= '0' && origin[index] <= '9')
        {
            respuesta = TRUE;
            break;
        }
    }
    return respuesta;
}

int createTitle(char origin[])
{
    if(onlyHasLettersAndSpaces(origin))
    {
        firstUpperCase(origin);
        puts(origin);
    }
    else
    {
        printf("Formato erroneo: Solo se permiten letras y espacios");
    }
    return 0;
}
