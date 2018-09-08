#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char buffer[100];
    float value;
    char *endptr;
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return -1; /* Unexpected error */
    value = strtod(buffer, &endptr);
    if ((*endptr == '\0') || (isspace(*endptr) != 0))

    {
        printf("It's float: %f\n", value);

    }
}
