#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Function to implement linear search algorithm
 *
 * @array: pointer to an array of integers
 * @size: array size.
 * @value:  is the value to search for
 *
 * Return: the index of the first match else -1 (Failure)
 */
int linear_search(int *array, size_t size, int value)
{
	int index;

	if (!array)
		return (-1);

	index = 0;

	while (index < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}
