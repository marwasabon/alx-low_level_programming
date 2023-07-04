#include "main.h"

/**
 * _memcpy - fills memory with a constant byte
 * @src: pointer to memory
 * @dest: constant byte used to replace
 * @n: number of  bytes to replace
 * Description:copy src to dest  with byte b for n bytes
 * Return: pointer to memory
 **/
	char *_memcpy(char *dest, char *src, unsigned int n)
{

	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
