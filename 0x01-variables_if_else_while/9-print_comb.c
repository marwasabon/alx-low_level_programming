#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function takes no input parameters and returns an integer value.
 * It calculates the last digit of a given number and prints it to the console.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(' ');
			if (i == 9 && j == 9)
				break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
