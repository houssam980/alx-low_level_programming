#include "main.h"
/**
* print_alphabet_x10 - print the alphabet 10 times
* Description: discription here
* Return: Always 0 (Success)
*/



void print_alphabet_x10(void)
{
int i;
int p;
for (i = 0 ; i < 10 ; i++)
{
for (p = 'a' ; p <= 'z' ; p++)
_putchar(p);
_putchar('\n');
}
}
