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
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
