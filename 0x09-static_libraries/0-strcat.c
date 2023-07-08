#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * *_strcat- get int  string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * Description: cpies string src to buffer
 * Return: dest pointer
 **/

	char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
