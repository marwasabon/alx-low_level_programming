#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/
	int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
