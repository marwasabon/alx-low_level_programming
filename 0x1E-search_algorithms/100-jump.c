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
	int jump = (int)sqrt(size);
	int left = 0;
	int i = 0;
	int right = jump;

	if (array == NULL || size == 0)
		return (-1);

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (i = left; i <= right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
