#include "search_algos.h"

/**
  * _binary_search - Searches for a value
  * @array: array
  * @left: start
  * @right:end
  * @value: value
  * Return : NULL if not represnted
  */

int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t iter;
if (array == NULL)
return (-1);
while (right >= left)
{
printf("Searching in array: ");
for (iter = left; iter < right; iter++)
printf("%d, ", array[iter]);
printf("%d\n", array[iter]);
iter = left + (right - left) / 2;
if (array[iter] == value)
return (iter);
if (array[iter] > value)
right = iter - 1;
else
left = iter + 1;
}
return (-1);
}

/**
  * exponential_search - using exponential search
  * @array: A pointer to the first element of the array to search.
  * @size: size
  * @value: value
  * Return : NULL if not represnted
  */
int exponential_search(int *array, size_t size, int value)
{
size_t iter = 0, right;
if (array == NULL)
return (-1);
if (array[0] != value)
{
for (iter = 1; iter < size && array[i] <= value; iter = iter * 2)
printf("Value checked array[%ld] = [%d]\n", iter, array[i]);
}
right = iter < size ? iter : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", iter / 2, right);
return (_binary_search(array, iter / 2, right, value));
}
