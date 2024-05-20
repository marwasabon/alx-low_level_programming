#include <stdlib.h>
#include <stdio.h>

int binarySearchRecurs(int *array, size_t min, size_t max, int value);
void print_array(int *array, size_t start, size_t end);

/**
 * binary_search - Function that implements binary search algorithm
 *
 * @array: haystack (int* array)
 * @size: size of the haystack (size_t)
 * @value: needle (int)
 *
 * Return: the index of first sucessful location else -1 (failure)
 */
int binary_search(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);
	return (binarySearchRecurs(array, 0, size - 1, value));
}


/**
 * binarySearchRecurs - Function that search for an
 * element using the binary search algorithm
 *
 * @array: haystack (int* array)
 * @min: of left side
 * @max: index of right
 * @value: needle (int)
 *
 * Return: the index of first sucessful location else -1 (failure)
 */
int binarySearchRecurs(int *array, size_t min, size_t max, int value)
{
	size_t mid;

	while (min <= max)
	{
		if (min == 0)
			mid = max / 2;
		else
			mid = min + ((max - min) / 2);

		 print_array(array, min, max);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Function that prints an array
 *
 * @array: (int* array)
 * @start: left side
 * @end: index of right side
 *
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		printf("%d", array[start]);
		if (start < end)
			printf(", ");
		else
			printf("\n");
		start++;
	}
}

