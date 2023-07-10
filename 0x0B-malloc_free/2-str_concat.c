#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two strings
 * using at most n bytes from src
 * @s1: input value
 * @s2: input value
 * Return: result
 */
	char *str_concat(char *s1, char *s2)
{
	int i, j, size;

	char *result;

	int length = 0;

	int length2 = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s1 = " ";
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	while (s1[length] != '\0')
	{
		length++;
	}
	size = length2 + length;

	result = (char *)malloc((size + 1) * sizeof(char));

	if (result != NULL)
	{
		for (i = 0; i < length; i++)
			result[i] = s1[i];
		for (j = 0; j < length2; j++)
			result[i + j] = s2[j];
	}
	else
		return (NULL);
	return (result);
}
