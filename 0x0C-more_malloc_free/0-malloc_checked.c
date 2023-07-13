#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked  - allocates memory using malloc.
 * @b: the size of the memory to printc
 *
 * Return: Nothing.
 */
	void *malloc_checked(unsigned int b)
{
	void *a;

	if (b <= 0)
	{
	}
	a = (void *)malloc(b);
	if (a == NULL)
	{
	}
	return (a);
}
