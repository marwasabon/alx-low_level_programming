#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an array as is
 * @array: name of the person
 * @size: size of the array
 * @action:  is a pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size || !array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
