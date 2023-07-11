#include <stdio.h>

/**
 * main - Entry point
 * @argc: first argument aka counter.
 * @argv: argment vector
 * Return: Always 0 (Success)
 *
 */
	int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
