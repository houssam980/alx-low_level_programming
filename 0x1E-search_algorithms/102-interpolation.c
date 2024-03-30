#include "search_algos.h"

/**
 * interpolation_search - search using Interpolation
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t post, lo, hgh;
double fi;
if (array == NULL)
return (-1);
lo = 0;
hgh = size - 1;
while (size)
{
fi = (double)(hgh - lo) / (array[hgh] - array[lo]) * (value - array[lo]);
post = (size_t)(lo + fi);
printf("Value checked array[%d]", (int)post);
if (post >= size)
{
printf(" is out of range\n");
break;
}
else
{
printf(" = [%d]\n", array[post]);
}

if (array[post] == value)
return ((int)post);
if (array[post] < value)
lo = post + 1;
else
hgh = post - 1;
if (lo == hgh)
break;
}
return (-1);
}
