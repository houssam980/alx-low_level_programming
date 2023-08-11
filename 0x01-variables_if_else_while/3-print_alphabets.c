#include <stdio.h>
/**
 * main - Entry point
 * Description: putchar alphabit
 * Return: Always 0 (Success)
 */







int main(void)
{
char alpha;
char alphaup;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alphaup = 'A'; alphaup <= 'Z'; alphaup++)
putchar(alphaup);
putchar('\n');
return (0);
}

