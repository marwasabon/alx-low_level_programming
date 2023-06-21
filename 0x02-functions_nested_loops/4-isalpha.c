#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *  _isalpha - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
	int _isalpha(int c)
	{
		int r = isalpha(c);
		int s = islower(c);

		if (r || s != 0)
			return (1);
		else
			return (0);
	}
