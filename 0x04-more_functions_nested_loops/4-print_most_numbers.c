#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_most_numbers - returns 1 if char is digit
 *
 *
 **/
	void print_most_numbers(void)
	{
		int i;

		i = 0;

		while (i < 10)
		{
			if (i == 2 || i == 4)
			{
				i++;
				continue;
			}
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
	}
