#include "variadic_functions.h"

/**
 * op_c - Print character
 * @form: name va_list
 * Return: Nothing.
 */
void op_c(va_list form)
{
printf("%c", va_arg(form, int));
}
/**
 * op_i - Print Integer
 * @form: name va_list
 * Return: Nothing.
 */

void op_i(va_list form)
{
printf("%i", va_arg(form, int));
}
/**
 * op_f - print FLoat numbers
 * @form: name of va_list
 * Return: Nothing.
 */

void op_f(va_list form)
{
printf("%f", va_arg(form, double));
}
/**
 * op_s -print string
 * @form: name va_list
 * Return: Nothing.
 */

void op_s(va_list form)
{
char *str;
str = va_arg(form, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
 * print_all - check the code for Holberton School students.
 * @format: number of arguments in character format
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
va_list all;
unsigned int lp_1, lp_2;
char *separator = "";
f ops[] = {
{"c", op_c},
{"i", op_i},
{"f", op_f},
{"s", op_s},
};
va_start(all, format);
lp_1 = 0;
while (format && format[lp_1])
{
lp_2 = 0;
while (lp_2 < 4)
{
if (ops[lp_2].op[0] == format[lp_1])
{
printf("%s", separator);
separator = ", ";
ops[lp_2].f(all);
break;
}
lp_2++;
}
lp_1++;
}
printf("\n");
va_end(all);
}
