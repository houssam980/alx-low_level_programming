#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed
 * @n: num
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
int sum_of;
unsigned int lp;
va_list list;
va_start(list, n);
for (lp = 0, sum_of = 0; lp < n; lp++)
sum_of += va_arg(list, int);
va_end(list);
return (sum_of);
}
