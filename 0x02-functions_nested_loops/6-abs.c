#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *  _abs - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
	int _abs(int c)
	{
		if (c < 0)
		{
			return (-c);
		}
		else
		{
			return (c);
		}
	}
