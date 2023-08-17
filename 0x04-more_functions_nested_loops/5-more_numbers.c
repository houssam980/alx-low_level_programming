#include "main"


/**
* more_numbers - check alphabet uppercase
* Return: return 0 (Success)
*/






void more_numbers(void)
{

int num;
int i;
for (i = 0; i <= 9; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
putchar(num / 10 + '0');
putchar(num % 10 + '0');
}
putchar('\n');
num = 0;
	}
}


