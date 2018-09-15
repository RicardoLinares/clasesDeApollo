#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include <ctype.h>
#include "stringCustom.h"

#define MAXIMO_CARACTERS 21

int main()
{
    char titulo[MAXIMO_CARACTERS];

    putLineInString(titulo, MAXIMO_CARACTERS, "Ingrese el titulo: ");

    createTitle(titulo);

    return 0;
}
