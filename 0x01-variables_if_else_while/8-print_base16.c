#include <stdio.h>
/**
* main - Entry point
* Description: putchar base16
* Return: Always 0 (Success)
*/



int main(void)
{
int i;
int a;
for (i = 0; i <= 9; i++)
putchar(48 + i);
for (a = 0; a <= 5; a++)
{
putchar(97 + a);
}
putchar ('\n');
return (0);
}
