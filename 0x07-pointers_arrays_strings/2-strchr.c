#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to c in s of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
int lp = 0;
while (*(s + lp))
{
if (*(s + lp) == c)
return (s + lp);
lp++;
}
if (*(s + lp) == c)
return (s + lp);
return (NULL);
}
