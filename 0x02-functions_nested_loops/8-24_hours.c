#include "main.h"
/**
* jack_bauer - print 24h and 59sec
* Return: Always 0 (Success)
*/




void jack_bauer(void)
{
	int hr, mi;

	for (hr = 0; hr <= 24; hr++)
	{
		for (mi = 0; mi <= 59; mi++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mi / 10) + '0');
			_putchar((mi % 10) + '0');
			_putchar('\n');
		}
	}
}
