#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to br flipped.
 * @n: starting point.
 * @m: ending point.
 * Return: the number of bits being flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int bits;

	unsigned long int xor;

	bits = 0;
	xor = n ^ m;
	while (xor != 0)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
