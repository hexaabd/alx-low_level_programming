#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _strlen - function that returns a pointer to a newly
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */
int	_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/**
 * _strdup - duplacate a string
 * @str : the duplacate str
 *
 * Return: the str dup
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *dup;

	i = 0;
	if (!str)
		return (NULL);
	len = _strlen(str);
	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return ("NULL");
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
