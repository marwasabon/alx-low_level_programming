#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
	int _strlen(char *s)
{	unsigned int i;

	if (s == NULL)
		return (1);
	for (i = 0; s[i] != '\0'; i++)
	;
	return (i + 1);
}
/**
 * string_nconcat - concatenates specified values from src to dest
 * @s1: second string to copy from
 * @s2: string to be overwritten
 * @n: number of values to concatenate
 * Description: concatenates n number of values from src to end of dest
 * Return: pointer to dest
 **/
	char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i, j, len_s1, len_s2;

	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);

	len_s2 = _strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2 - 1;
	}
	result = malloc((len_s1 + n) * sizeof(char));

	if (result == NULL)
		return (NULL);
	if (len_s1 == 1 && len_s2 == 1)
		return (NULL);
	for (i = 0; i < len_s1 - 1; i++)
		result[i] = s1[i];
	for (j = 0; j <= n ; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}
