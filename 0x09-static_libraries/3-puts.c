#include "main.h"

/**
 * _puts - print to stdout
 * @str: pointer
 */
void _puts(char *str)
{
int lp;
for (lp = 0; str[lp] != '\0'; lp++)
{
_putchar(str[lp]);
}
_putchar('\n');
}
