#include "variadic_functions.h"

/**
 * print_numbers - prints integer arguments with a separator
 * @separator: - print among the nums
 * @n: - num
 * Return: nothing to return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
char *com;
unsigned int lp;
va_list list;
if (separator == NULL || *separator == 0)
com = "";
else
com = (char *) separator;
va_start(list, n);
if (n > 0)
printf("%d", va_arg(list, int));
for (lp = 1; lp < n; lp++)
printf("%s%d", com, va_arg(list, int));
printf("\n");
va_end(list);
}
