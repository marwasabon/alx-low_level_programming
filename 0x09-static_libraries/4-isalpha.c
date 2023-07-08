#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isalpha - returns 1 if c is a letter
 *
 * @c: character to be checked if alpha
 *
 * Return: 1 if letter, 0 otherwise
 **/
	int _isalpha(int c)
{
	return (isalpha(c));
}
