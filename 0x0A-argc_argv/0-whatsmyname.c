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

	 printf("%s\n", argv[0]);

	if (argc > 1)
		printf("%s\n", argv[0]);
	return (0);
}
