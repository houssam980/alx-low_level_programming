#include "main.h"

/**
 * print_rev - print it in revers
 * @s: string that will print
 */
void print_rev(char *s)
{
int ctr, ctr2, how_m;
ctr = 0;
while (s[ctr] != '\0')
{
ctr++;
}
how_m= ctr;
for (ctr2 = how_m - 1; ctr2 >= 0; ctr2--)
{
_putchar(s[ctr2]);
}
_putchar('\n');
}
