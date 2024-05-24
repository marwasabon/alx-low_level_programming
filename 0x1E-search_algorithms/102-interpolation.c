#include "search_algos.h"

/**
 * interpolation_search - Function implments interpolation search algorithm
 * in array of integers.
 * @array: array
 * @size: array size
 * @value: value to search for
 * Return: index of the number.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	int pos;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
