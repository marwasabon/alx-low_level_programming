#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array  - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
	char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	s = malloc(size  * sizeof(char));
	if (size == 0)
	{
	return (NULL);
	}
	if (s == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < size)
	{
	s[i] = c;
	i++;
	}
	s[i] = '\0';
	return (s);
}
