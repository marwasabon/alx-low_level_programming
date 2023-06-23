#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_numbers - returns 1 if char is digit
 *
 *
 * Return: 1 if digit, 0 otherwise
 **/
	void print_numbers(void)
	{
		int i;

		i = 0;

		while (i < 10)
		{
			_putchar(i+'0');
			i++;
		}
		_putchar('\n');
	}
