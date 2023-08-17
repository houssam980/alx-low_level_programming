#include "main.h"

/**
 * print_square - print sqaure using _putchar
 * @size: size of square
 * Return: no return
 */
void print_square(int size)
{
int t_head, t_foot;
t_foot = 0;
if (size < 1)
_putchar('\n');
while (t_foot < size)
{
t_head = 0;
while (t_head < size)
{
_putchar('#');
t_head++;
}
_putchar('\n');
t_foot++;
}
}

