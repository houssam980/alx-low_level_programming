#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print n number
 */




void print_to_98(int n)
{
int vn;
if (n > 98)
{
for (vn = n; vn  > 97; vn--)
printf("%d, ", vn);
}
else
{
for (vn = n; vn < 98; vn++)
printf("%d, ", vn);
printf("98\n");
}

}
