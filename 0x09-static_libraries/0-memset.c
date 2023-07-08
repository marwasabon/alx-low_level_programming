#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - copies the character c to the first n characters
 * @s:  string to modify
 * @b: char to copy
 * @n: number of values
 * Description: changes all lower case letters to capitals
 * Return: char
 **/
	char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
