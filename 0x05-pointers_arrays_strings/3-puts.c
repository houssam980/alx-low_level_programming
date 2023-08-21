#include "main.h"

/**
 * _puts - print to stdout
 * @str: pointer
 */

void _puts(char *str)
{
int lp;
lp = 0;
while (str[lp] != '\0')
{
lp++;
_putchar(str[lp]);
}
return (lp);
}
