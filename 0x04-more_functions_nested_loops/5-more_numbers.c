#include "main.h"
/**
 * void more_numbers - returns 1 if char is digit
 *
 * Return: nothing
 **/
	void  more_numbers(void)
	{
		char i;

		char j;

		for (i = '0'; i < '9'; i++)
		{
			for (j = '0'; j < 13; j++)
			{
			_putchar(j);
			}

		_putchar('\n');
		}
	}
