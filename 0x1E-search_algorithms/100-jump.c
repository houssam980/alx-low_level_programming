#include "search_algos.h"
#include <math.h>

/**
 * jump_search - look for a value
 * @array: array
 * @size: size 
 * @value: value
 * Return: number index
 */
int jump_search(int *array, size_t size, int value)
{
int idx, me, ke, prev;
if (array == NULL || size == 0)
return (-1);
me = (int)sqrt((double)size);
ke = 0;
prev = idx = 0;
do {
printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
if (array[idx] == value)
return (idx);
ke++;
prev = idx;
idx = ke * me;
} while (idx < (int)size && array[idx] < value);
printf("Value found between indexes [%d] and [%d]\n", prev, idx);
for (; prev <= idx && prev < (int)size; prev++)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
return (-1);
}
