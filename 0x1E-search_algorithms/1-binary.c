#include "search_algos.h"

/**
  * binary_search - Searches for a value in sorted
  * @array: pointer
  * @size: size
  * @value: valu
  * Return: NULL if no value presented
  */
int binary_search(int *array, size_t size, int value)
{
size_t iter, lft, rgh;
if (array == NULL)
return (-1);
for (lft = 0, rgh = size - 1; rgh >= lft;)
{
printf("Searching in array: ");
for (iter = lft; iter < rgh; iter++)
printf("%d, ", array[iter]);
printf("%d\n", array[iter]);
iter = lft + (rgh - lft) / 2;
if (array[iter] == value)
return (iter);
if (array[iter] > value)
rgh = iter - 1;
else
lft = iter + 1;
}
return (-1);
}
