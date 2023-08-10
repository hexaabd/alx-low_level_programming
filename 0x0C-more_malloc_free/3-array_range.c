#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		arr[i] = min++;

	return (arr);
}
