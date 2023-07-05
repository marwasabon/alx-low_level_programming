#include "main.h"

/**
 * _strlen_recursion - prints length of a string, followed by a new line.
 * @s: array of values
 * Description: prints sum of both diagonals
 * Return: nothing
 **/
	int _strlen_recursion(char *s)
{
	int i;

	int sum = 1;

	i = 0;

	if (s[i] == '\0')
		return (0);
	if (s[i] != '\0')
	{
		sum = sum + _strlen_recursion(&s[i + 1]);
	}
	return (sum);
}
