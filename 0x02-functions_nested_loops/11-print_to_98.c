#include "main.h"




void print_to_98(int n)
{
	int vn ;
	if (n >= 98)
	{
		for (vn = n; vn  > 98; vn--)
		printf("%d, ", vn);
	}

	else
	{
		for (vn = n; vn < 98; vn++)
		printf("%d, ", n);
		printf("98\n");
	}
}
