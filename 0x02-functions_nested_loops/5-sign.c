#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *  print_sign - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
	int print_sign(int c)
	{

		if (c > 0)
		{
			_putchar('+');
			return (1);
		}
		if (c < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
