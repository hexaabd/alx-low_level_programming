#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * _strlen - function return the len og the str
 * @str: the string
 * Return : the len
 */
int _strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/**
 * string_nconcat - function return a concat str
 * @s1: the first arg str
 * @s2: the sec arg str
 * Return: the concat str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_1;
	unsigned int len_2;
	unsigned int i,j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	if (n < len_2 && n > 0)
	len_2 = n;
	str = malloc(sizeof(char) * len_1 + len_2 + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (j < len_2 && s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
