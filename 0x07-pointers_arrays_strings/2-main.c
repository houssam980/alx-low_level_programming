#include "main.h"


/**
 * _strchr -  locates a character in a string
 * @s: str 
 * @c: char
 * Return: Returns a pointer to the first occurrence of the char in the str otherwise NULL
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
    else
	return (NULL);
}
