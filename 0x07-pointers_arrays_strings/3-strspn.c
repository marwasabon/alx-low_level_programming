#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string
 * @accept: bytes being compared
 * Description: finds number of bytes required to find accept in s
 * Return: bytes required to find accept
 **/
	unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count = 1;
			}
		}
		if (count == 0)
		{
			return (i);
		}
	}
	return (i);
}
