#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int how_m, n, loop;

	how_m = 0;

	while (str[how_m] != '\0')
	{
		how_m++;
	}

	if (how_m % 2 == 0)
	{
		for (loop = how_m / 2; str[loop] != '\0'; loop++)
		{
			_putchar(str[loop]);
		}
	} else if (how_m % 2)
	{
		for (n = (how_m - 1) / 2; n < how_m - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
