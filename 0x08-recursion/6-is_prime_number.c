#include "main.h"

/**
 * operation_prime - Makes possible to evaluate from 1 to n
 * @opt1: operator 1
 * @opt2: operator 2
 * Return: On success 1.
 * -1 if n not a prime
 */
int operation_prime(int opt1, int opt2)
{
if (opt1 == opt2)
return (1);
else if (opt1 % opt2 == 0)
return (0);
return (operation_prime(opt1, opt2 + 1));
}
/**
 * is_prime_number - check for prime num
 * @n: Number 
 * Return: On success 1 return -1 if num not prime
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (operation_prime(n, 2));
}
