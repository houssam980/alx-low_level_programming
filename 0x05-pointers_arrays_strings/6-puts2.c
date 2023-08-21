#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string that will print
 */
void puts2(char *str)
{
int how_m, lp;
how_m = 0;
while (str[how_m] != '\0')
{
how_m++;
}
for (lp = 0; lp < how_m; lp += 2)
{
_putchar(str[lp]);
}
