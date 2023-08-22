#include "main.h"


/**
 * _strcpy - Copies a string
 * @dest: buffer
 * @src: source of string
 * Return: return @dest
 */
char *_strcpy(char *dest, const char *src)
{
int po = 0;
while (src[po])
{
dest[po] = src[po];
po++;
}
return (dest);
}
