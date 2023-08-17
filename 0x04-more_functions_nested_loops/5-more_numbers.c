#include "main"


/**
* more_numbers - check alphabet uppercase
* Return: return 0 (Success)
*/




void more_numbers(void)
{

int pnt = 0;
int counter = 0;

while (counter <= 9)
{
while (pnt <= 14)
{
if (pnt > 9)
_putchar(pnt / 10 + '0');
_putchar(pnt % 10 + '0');
pnt++;
}
_putchar('\n');
counter++;
pnt = 0;
}
}
