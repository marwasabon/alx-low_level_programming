#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * _strdup - returns a pointer.
 * @str: the string to copy
 *
 * Return: a pointer to a new string.
 */
	char *_strdup(char *str)
{
	int i = 0;

	int length = 0;

	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = malloc(INT_MAX);

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
