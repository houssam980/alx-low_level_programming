#include "main.h"
/**
* print_numbers - print numbers using _putchar
* Return: return 0 (Success)
*/
void print_numbers(void)
{
char nm = 0;
while (nm >= '0')
{
_putchar(nm);
nm++;
}
_putchar('\n');
}
