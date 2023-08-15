#include "main.h"
/**
* print_sign - print sign
*@n: input
* Description: discription here
* Return: return 1 if greater return 0 if equal -1 if smuller (Success)
*/





int print_sign(int n)
{

if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}

