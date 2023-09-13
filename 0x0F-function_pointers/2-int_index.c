#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - looks for int
* @array: array
* @size: pointer
*@cmp: compair
* Return: returns index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int lp = 0;
if (array && size && cmp)
while(lp < size)
{
if (cmp(array[lp]))
return (lp);
lp++;
return (-1);
}
}
