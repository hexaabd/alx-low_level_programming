#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - alloc a 2d pointer
 * @width: width of the 2d
 * @height : height of the 2d
 *
 * Return: pointer to a 2d of int
 */
int **alloc_grid(int width, int height)
{
	int row;
	int col;
	int **arr;
	int i;
	int j;

	j = 0;
	i = 0;
	row = height;
	col = width;
	if (row <= 0 || col <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * row);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < row; i++)
	{
		arr[i] = malloc(sizeof(int) * col);
		if (!arr[i])
		{
			for (i = 0; i < row; i++)
				free(arr[i]);
			free(arr);
			return (NULL);

		}
		for (j = 0; j < col; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
