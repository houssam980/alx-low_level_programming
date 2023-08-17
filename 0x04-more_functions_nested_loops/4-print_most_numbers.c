#include "main.h"
/**
* print_most_numbers - print 0 to 9 without 2 4
* Return: return 1 if upper otherwise Always 0 (Success)
*/


void print_most_numbers(void)
{
char i = 0;
while (i <= '9')
{
if (i != '2' && i != '4')
_putchar(i);
}
i++;
_putchar('\n');
return (0);
}
