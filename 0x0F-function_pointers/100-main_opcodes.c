#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point, This fuction perform a calulaction base on 2 numbers and
 * the given operator.
 * @argc: number of agruments
 * @argv: the string value of the arguments.
 *
 * Return: 0 (on Sucess)
 */


int main(int argc, char **argv)
{

	int i;

	int num_bytes;

	unsigned char *ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
