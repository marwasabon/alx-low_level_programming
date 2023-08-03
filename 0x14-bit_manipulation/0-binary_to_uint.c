
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string.
 * Return:  result.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (!b || !*b)
		return (0);


	result = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result * 2) + (*b - '0');
		b++;
	}
	return (result);
}
