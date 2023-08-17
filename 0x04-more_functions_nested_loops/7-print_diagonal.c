#include "main.h"
/**
 * print_diagonal - draw a diagonal line
 * @n: input num
 * Return: return 0 (Success)
 */

void print_diagonal(int n)
{
int count, lp;
count = 0;
while (n > 0)
{
lp = count;
while (lp > 0)
{
_putchar(' ');
lp--;
}
_putchar('\\');
_putchar('\n');
count++;
n--;
}
if (count < 1)
_putchar('\n');

}
