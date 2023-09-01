#include "main.h"
/**
 * _strncpy - cp str with n of bytes
 * @dest:output
 * @src: input
 * @n: number of bytes
 *Return: Copied string with the number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
int inpt;
for (inpt = 0; inpt < n && src[inpt] != '\0' ; inpt++)
{
dest[inpt] = src[inpt];
}
for (; inpt  < n; inpt++)
{
dest[inpt] = '\0';
}
return (dest);
}
