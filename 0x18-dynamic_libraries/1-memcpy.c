#include "main.h"

/**
 * _memcpy - copy memo area
 * @dest: pointer to dest
 * @src: copied from source
 * @n: bytes from source
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char *begin = dest;
while (i < n)
{
*dest++ = *src++;
i++;
}
return (begin);
}
