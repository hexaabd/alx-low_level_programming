#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - functon return an array of char
 * @size : the size of the array
 * @c : the str contains
 *
 * Return: return a str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	if (size <= 0)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
