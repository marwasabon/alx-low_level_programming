
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string.
 * Return:  result.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	int power;

	if (!b || !*b)
		return (0);


	result = 0;
	power = 1;

	while (*b)
	{
		if (*b == '1')
		{
			result += power;
		}
		power *= 2;
		b++;
	}

	return (result);
}
