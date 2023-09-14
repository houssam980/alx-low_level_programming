#include "variadic_functions.h"


/**
 * print_numbers - prints integer arguments with a separator
 * @separator: - print among the nums
 * @n: - num
 * Return: nothing to return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int lp = n;
va_list ap;
if (!n)
{
    
    printf("\n");
    return;
}
va_start(ap, n);
while (lp--)
    printf("%d%s", va_arg(ap, int), lp ? (separator ? separator : "") : "\n");
va_end(ap);

}
