#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 **/

	void print_alphabet(void)
	{
		char c;
		
		int i;

		for (i = 1; i <=10; i++){

			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
		}
		_putchar('\n');
	}
