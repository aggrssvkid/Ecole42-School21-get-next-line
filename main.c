#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"

int main()
{
    char    *str;

    printf("Enter your str\n");
    str = get_next_line(0);
    printf("Your str:%s", str);
    free(str);
    return (0);
}