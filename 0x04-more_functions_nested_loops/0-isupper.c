#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
	int _isupper(int c)
	{
		int r = isupper(c);

		if (r == 0)
			return (0);
		else
			return (1);
	}
