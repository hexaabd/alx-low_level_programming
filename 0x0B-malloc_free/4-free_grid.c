#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - free a 2d pointer
 * @grid: the array must free
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid)
		free(NULL);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
