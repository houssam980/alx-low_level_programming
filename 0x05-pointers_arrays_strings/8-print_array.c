#include <stdio.h>
#include "main.h"

/**
* print_array - print n elements
* @a: array
* @n: number of elements
*/
void print_array(int *a, int n)
{
	int lp;

	for (lp = 0; lp < n; lp++)
	{
		if (lp == 0)
			printf("%d", a[lp]);
		else
			printf(", %d", a[lp]);
	}
		printf("\n");
}
