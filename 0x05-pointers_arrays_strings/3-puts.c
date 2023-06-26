#include "main.h"

/**
 * _puts - derefencing pointers
 * @str: pointer to integer.
 * Return: nothing
 */
	void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
