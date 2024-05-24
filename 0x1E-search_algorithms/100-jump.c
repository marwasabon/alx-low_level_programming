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

	int index, m, n, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	n = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		n++;
		prev = index;
		index = n * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
