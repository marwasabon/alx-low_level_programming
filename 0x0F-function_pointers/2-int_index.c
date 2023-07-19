#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - prints an array as is
 * @array: name of the person
 * @size: size of the array
 * @cmp:  is a pointer to the function you need to use
 * Return: int index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
