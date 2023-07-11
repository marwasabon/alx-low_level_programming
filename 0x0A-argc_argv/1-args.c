#include <stdio.h>

/**
 * main - Entry point
 * @argc: first argument aka counter.
 * @argv: second argument.
 * Return: Always 0 (Success)
 *
 */
	int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i, count;

	count = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			count++;
		}
		printf("%d\n", count);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
