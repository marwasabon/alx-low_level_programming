#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to get.
 * @n: number to get bit.
 * Return: 1 when success  else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
