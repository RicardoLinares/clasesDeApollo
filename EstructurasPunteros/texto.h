#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 1024

int putLineInStringLoop(char[],int, char[]);

int putLineInString(char[],int, char[]);

int toCamelCase(char[]);

int validateStringToInteger(char*, int);

int validateFormatName(char*,int);

int strcicmp(char const*, char const*);

void RemoveSpaces(char*);
