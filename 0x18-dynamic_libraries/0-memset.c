#include "main.h"

/**
 * _memset - n bytes of memo
 * @s: pointer to start of memory area
 * @b: constant
 * @n: bytes nums
 * Return: returns pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *begin = s;
while (i < n)
{
*s++ = b;
i++;
}
return (begin);
}
