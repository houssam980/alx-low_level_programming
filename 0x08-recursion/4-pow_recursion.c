#include "main.h"

/**
 * _pow_recursion - power raised to y
 * @x: Number 
 * @y: Power number 
 * Return: if y is lower than 0 return -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
