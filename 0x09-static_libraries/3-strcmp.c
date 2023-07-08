#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare
 * Description: compares two strings to see which is
 * Return: -15 if s1 is less than s2, 0 if equal,
 * 15 if s1 is greater
 **/

	int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
