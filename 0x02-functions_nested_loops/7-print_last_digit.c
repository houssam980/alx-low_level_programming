#include "main.h"
/**
* print_last_digit - print the last alphabet
* int num: input
* Return: returns result value (success)
*/




int print_last_digit(int num)
{
int gv;
gv = num % 10;
if (gv < 0)
{
_putchar(-gv + 48);
return (-gv);
}
else
{
_putchar(gv + 48);
return (gv);
}
}
