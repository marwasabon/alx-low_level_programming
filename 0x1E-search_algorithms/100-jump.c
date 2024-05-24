#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function that implments Jump search algorithm
 *  that search in array of integers.
 * @array: input array.
 * @size: array size.
 * @value: value to search for.
 * Return: index of the number or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[step - 1] < value)
	{
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;

		if (prev == fmin(step, size))
			return (-1);

	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
