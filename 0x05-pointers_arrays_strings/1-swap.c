#include "main.h"

/**
 * swap_int - derefencing pointers
 * @a: pointer to integer.
 * @b: pointer to integer.
 * Return: nothing
 */
	void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
