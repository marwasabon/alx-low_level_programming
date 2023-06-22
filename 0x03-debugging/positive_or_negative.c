#include "main.h"

/**
 * positive_or_negative - Determines if an integer is positive, negative,
 *                        or zero and prints the result.
 * @i: The integer to be checked.
 */
	void positive_or_negative(int i)
{
       	if (i > 0)
	       	printf("%d is positiven", i);
	else if (i < 0)
		printf("%d is negativen", i);
	else
		printf("%d is zeron", i);
}
