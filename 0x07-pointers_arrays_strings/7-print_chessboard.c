#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: chessboard
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
int lp1, lp2;
for (lp1 = 0; lp1 < 8; lp1++)
{
for (lp2 = 0; lp2 < 8; lp2++)
{
if (lp2 == 7)
{
_putchar(a[lp1][lp2]);
_putchar('\n');
}
else
_putchar(a[lp1][lp2]);
}
}
}
