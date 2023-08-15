#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print n number
 */




void print_to_98(int n)
{
	int lp;

	if (n < 98)
	{
		for (lp = n; lp < 98; lp++)
		{
			printf("%d", lp);
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (lp = n; lp > 98; lp--)
		{
			printf("%d", lp);
			printf(",");
			printf(" ");
		}
	}

	printf("98\n");

}
