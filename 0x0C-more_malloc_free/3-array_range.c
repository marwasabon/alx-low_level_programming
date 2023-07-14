#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */

int *array_range(int min, int max)
{
	int i, *arr;
    if (min > max) {
        return (NULL);
    }

    arr = malloc((max - min + 1) * sizeof(int));
    if (arr == NULL) {
        return (NULL);
    }

    for (i = 0; i <= max - min; i++) {
        arr[i] = min + i;
    }

    return (arr);
}
