#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 10
int main()
{
    int array[CANTIDAD];
    int i,j;
    int auxiliar;

    for(i=0; i<CANTIDAD; i++)
    {
        array[i] = -(i * 2);
        printf("%d\n", array[i]);
    }
    printf("\n");
    for(i = 1; i<CANTIDAD; i++)
    {
        auxiliar = array[i];
        j = i;
        while(j > 0 && auxiliar < array[j - 1])
        {

            array[j] = array[j - 1];
            j--;
        }
        array[j] = auxiliar;
    }

    for(i=0; i<CANTIDAD; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
