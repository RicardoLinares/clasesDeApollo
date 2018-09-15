#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validations.h"

#define LENBUFFER 1024
int getEmail(char email[])
{
    int retorno = -1;
    int arrobaFlag = -1;
    int indexArroba = -1;
    int indexPunto = -1;
    int size = strlen(email) - 1;
    char buffer[LENBUFFER];
    fgets(buffer, LENBUFFER, stdin);
    int i;

    if(email != NULL && strlen(buffer) <= size && strlen(buffer) > 0)
    {
        for(i=0; i<strlen(buffer)-1; i++)
        {

            if (buffer[i] == ' ')
            {
                retorno = -1;
                break;
            }
            if (buffer[i] == '@')
            {
                if(arrobaFlag == -1)
                {
                    retorno = 0;
                    indexArroba = i;
                    arrobaFlag = 0;
                }
                else
                {
                    retorno = -1;
                    break;
                }
            }
            if(buffer[i] == '.' && indexArroba != -1)
            {
                indexPunto = i;
            }


            if(indexArroba == -1 || indexPunto == -1)
            {
                retorno = -1;
            }
            else
            {
                strcpy(email, buffer);
                retorno = 0;
            }
        }
    }
    return retorno;
}

