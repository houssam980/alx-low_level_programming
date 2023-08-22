#include "main.h"


/**
 * _strcpy - Copies a string
 * @dest: buffer
 * @src: source of string
 * Return: return @dest
 */

char *_strcpy(char *dest, char *src)
{
int cp;

	for (cp = 0; src[cp] != '\0'; cp++)
{
dest[cp] = src[cp];
}
	dest[cp] = '\0';
	return (dest);
}

