#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_grid - frees a 2D grid
 * @grid: 2D array
 * @height: height of 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
int lp;
for (lp = 0; lp < height; lp++)
free(grid[lp]);
free(grid);
}
