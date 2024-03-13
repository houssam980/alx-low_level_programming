#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array
 * @size: size
 * @value: value
 * Return: Always exit
 */

int linear_search(int *array, size_t size, int value)
{
int iter;
if (array == NULL)
return (-1);
for (iter = 0; iter < (int)size; iter++)
{
printf("Value checked array[%u] = [%d]\n", iter, array[iter]);
if (value == array[iter])
return (iter);
}
return (-1);
}
