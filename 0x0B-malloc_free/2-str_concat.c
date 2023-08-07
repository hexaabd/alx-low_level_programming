#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - funtoin that return the length of th string
 * @str : th str that must the fun return the length of it
 *
 * Return: return the len of str
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len_1;
	int len_2;
	char *str;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	str = malloc(sizeof(char) * len_1 + len_2 + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
