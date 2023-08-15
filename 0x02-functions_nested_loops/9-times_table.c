#include "main.h"





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

			time = n * time;

			if (rs <= 9)
				_putchar(' ');
			else
				_putchar((rs / 10) + '0');

			_putchar((rs % 10) + '0');
		}
		_putchar('\n');
	}
}
