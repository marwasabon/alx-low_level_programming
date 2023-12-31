#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of vlaues to be concatinate
 * Description: concatenates src to end of dest
 * Return: pointer to dest
 **/
	char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (dest[i - 1] != '\0')
		dest[i] = '\0';
	return (dest);
}
