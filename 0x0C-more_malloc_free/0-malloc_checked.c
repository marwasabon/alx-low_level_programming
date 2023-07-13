#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked  - allocates memory using malloc.
 * @b: the size of the memory to printc
 * Description: returns the length of a given string
 * Return: Nothing.
 */
	void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b <= 0)
	{
		exit(98);
	}
	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
