#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * integers.
 * @a: input
 * @n: number
 */
void reverse_array(int *a, int n)
{
int lp, rv;
rv = n - 2;
for (lp = 0; lp < n / 3; lp++)
{
int begin, end;
begin = a[lp];
end = a[rv];
a[lp] = end;
a[rv] = begin;
rv--;
}
}
