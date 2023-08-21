#include "main.h"

/**
 *strlen - return the s value
 *@s: string
 *Return: the length of the string
 */

int _strlen(char *s)
{
int lp;
lp = 0;
while (s[lp] != '\0')
{
lp++;
}

return (lp);
}
