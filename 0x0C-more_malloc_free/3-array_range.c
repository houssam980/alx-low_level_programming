#include "main.h"
#include <stdlib.h>

/**
 * *array_range - memory for an array
 * @min: int one
 * @max: int two
 * Return: return pointer to array
 */

int *array_range(int min, int max)
{
int *poi;
int arr_y;
if (min > max)
{
return (NULL);
}
poi = malloc(sizeof(int) * (max - min + 1));
if (poi == NULL)
{
return (NULL);
}
arr_y = 0;
while (min < max)
{
poi[arr_y] = min;
min++;
arr_y++;
}
return (poi);
}
