#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: source string
 * @c: character to search for
 * Description: searches string for character, returns pointer to char
 * Return: pointer to char
 **/
	char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
