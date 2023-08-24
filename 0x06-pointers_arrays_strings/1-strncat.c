#include "main.h"

/**
 * _strncat - const two string but(...)
 * @dest: output
 * @src: input
 * @n: number of bytes
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
int inpt, how_m;
for (inpt = 0; dest[inpt] != '\0'; inpt++)
;
for (how_m = 0; how_m < n && src[how_m] != '\0'; how_m++)
{
dest[inpt] = src[how_m];
inpt++;
}
if (how_m < n)
{
dest[inpt] = '\0';
}
return (dest);
}
