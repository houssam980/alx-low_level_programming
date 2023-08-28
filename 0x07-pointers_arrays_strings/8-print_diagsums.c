#include "main.h"
#include <stdio.h>

#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer
 * @size:diagonal
 */

void print_diagsums(int *a, int size)
{
int lp, sum1, sum2;/*lp means loop*/
sum1 = sum2 = 0;
for (lp = 0; lp < (size * size); lp += size + 1)
sum1 += a[lp];
for (lp = size - 1; lp < (size * size - 1); lp += size - 1)
sum2 += a[lp];
printf("%d, %d\n", sum1, sum2);
}
