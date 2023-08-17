#include "main.h"


/**
* more_numbers - check alphabet uppercase
* Return: return 0 (Success)
*/



void more_numbers(void)
{

	int cnt = 0;
	int printer = 0;

while (printer <= 9)
{
while (cnt <= 14)
{
if (cnt > 9)
_putchar(cnt / 10 + '0');
_putchar(cnt % 10 + '0');
cnt++;

		}
	_putchar('\n');
	printer++;
	cnt = 0;
}
}
