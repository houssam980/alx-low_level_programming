#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: bytes.
 * Return: pointer to memo place
 */
void *malloc_checked(unsigned int b)
{
char *poi;
poi = malloc(b);
if (poi == NULL)
exit(98);
return (poi);
}
