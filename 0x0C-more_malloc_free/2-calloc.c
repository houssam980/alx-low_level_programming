#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int
 * @size: unsigned int_2
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *poi;
unsigned int ctr;
if (nmemb == 0 || size == 0)
return (NULL);
poi = malloc(nmemb * size);
if (poi == NULL)
{
return (NULL);
}
ctr = 0;
while (ctr < nmemb * size)
{
poi[ctr] = 0;
ctr++;
}
return (poi);
}
