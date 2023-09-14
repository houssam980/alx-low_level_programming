#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments passed
 * @n: num
 *...: int
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
int sum_of = 0, lp = n;
va_list ap;
if (!n)
return (0);
va_start(ap, n);
while (lp--)
sum_of += va_arg(ap, int);
va_end(ap);
return (sum_of);
}
