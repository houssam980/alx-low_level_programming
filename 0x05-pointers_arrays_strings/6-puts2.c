#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
int how_m, ctr;
how_m = 0;
while (str[how_m] != '\0')
{
how_m++;
}
for (i = 0; ctr < how_m; ctr += 2)
{
_putchar(str[ctr]);
}
_putchar('\n');
}
