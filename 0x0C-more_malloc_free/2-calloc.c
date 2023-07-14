#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - create and array using calloc
 * @nmemb: number elements.
 * @size: size of the type.
 *
 * Return: pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		memset(ptr, 0, nmemb * size);
	}

	return (ptr);

}
