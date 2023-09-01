#include "main.h"

/**
 * _strspn - finds length of prefix substring
 * @s: string
 * @accept: substring of chars
 * Return: returns n
 */
unsigned int _strspn(char *s, char *accept)
{
int lp;
int ln = 0;
int prx;
while (*s)
	{
lp = 0;
prx = ln;
while (*(accept + lp) != '\0')
{
if (*(accept + lp) == *s)
ln++;
lp++;
}
if (prx == ln)
break;
s++;
}
return (ln);
}
