#include "main.h"
/**
 * factorial - factorial of n
 * @n: number
 * Return: factorial of n
 */
int factorial(int n)
{
if (n == 0 || n == 1)
return (1);
if (n > 1)
return (n * factorial(n - 1));
else
return (-1);
}
