#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 * Description: retruns first occurrence in a string
 * Return: pointer to first instance of string
**/
	char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
