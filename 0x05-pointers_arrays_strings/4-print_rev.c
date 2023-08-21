#include "main.h"

/**
 * print_rev - print in revers
 * @s: string
 */
void print_rev(char *s)
{
int counter, lp, lp2;
lp = 0;
while (s[lp] != '\0')
{
lp++;
}
counter = lp;
for (lp2 = counter - 1; counter >= 0; lp2--)
{
_putchar(s[lp2]);
}
_putchar('\n');
}
