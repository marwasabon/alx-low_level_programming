#include "main.h"

/**
 * _print_rev_recursion - prints a string, followed by a new line.
 * @s: array of values
 * Description: prints sum of both diagonals
 * Return: nothing
 **/
	void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	if (s[0] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
	else
		_putchar('\n');
}
