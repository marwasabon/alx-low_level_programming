#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: memory source
 * @n: bytes to copy to dest
 * Description: copies n values from src to dest
 * Return: pointer to memory
 **/
	char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
