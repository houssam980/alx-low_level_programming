#include "variadic_functions.h"


/**
 * print_numbers - prints string arguments with a separator
 * @separator: - print among the string 
 * @n: - num arg
 * @...: print string
 * Return: nothing to return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int lp = n;
char *str
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (lp--)
printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)", lp ? (separator ? separator : "") : "\n");
va_end(ap);
}
