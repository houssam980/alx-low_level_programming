#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates 2D array
 * @width: width
 * @height: height
 * Return: pointer to 2D array or NULL
 */
int **alloc_grid(int width, int height)
{
int **dc;
int lp1, lp2;
if (width < 1 || height < 1)
return (NULL);
dc = malloc(sizeof(int *) * height);
if (dc == NULL)
return (NULL);
for (lp1 = 0; lp1 < height; lp1++)
{
dc[lp1] = malloc(sizeof(int) * width);
if (dc[lp1] == NULL)
{
for (--lp1; lp1 >= 0; lp1--)
free(dc[lp1]);
free(dc);
return (NULL);
}
}
for (lp1 = 0; lp1 < height; lp1++)
for (j = 0; lp2 < width; lp2++)
dc[lp1][lp2] = 0;
return (dc);
}
