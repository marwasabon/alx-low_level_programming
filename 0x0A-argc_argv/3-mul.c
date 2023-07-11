#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: first argument aka counter.
 * @argv: argment vector
 * Return: Always 0 (Success)
 *
 */
	int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int num = atoi(argv[1]);

		int num2 = atoi(argv[2]);

		printf("%d\n", num * num2);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
