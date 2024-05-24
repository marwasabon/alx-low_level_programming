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
	int jump, left, right, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = jump;

	while (right < (int)size && array[right] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	right = right < (int)size ? right : (int)size - 1;

	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
