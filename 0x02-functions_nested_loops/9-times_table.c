#include "main.h"
/**
* times_table - print times 9
* Return: Always 0 (Success)
*/




void times_table(void)
{
	int n, time, rs;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (time = 1; time <= 9; time++)
		{
			_putchar(',');
			_putchar(' ');

			rs = n * time;

			if (rs <= 9)
				_putchar(' ');
			else
				_putchar((rs / 10) + '0');

			_putchar((rs % 10) + '0');
		}
		_putchar('\n');
	}
}
