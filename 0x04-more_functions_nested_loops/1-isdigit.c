#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_isdigit - returns 1 if char is digit
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if digit, 0 otherwise
 **/
	int _isdigit(int c)
	{
		int r = isdigit(c);

		if (r == 0)
			return (0);
		else
			return (1);
	}
