#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of chars
 *@size: array size
 *@c: char that will initialized
 *Return: return pointer or NULL
 */






char *create_array(unsigned int size, char c)
{
	char *num = malloc(size);
if (size == 0 || num == 0)
{
return (0);
}
	while (size--)
		num[size] = c;
	return (num);
}
