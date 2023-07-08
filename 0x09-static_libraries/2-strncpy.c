#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _strncpy - copies a string
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to copy
 * Description: copies string
 * Return: pointer to dest
 **/
	char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
