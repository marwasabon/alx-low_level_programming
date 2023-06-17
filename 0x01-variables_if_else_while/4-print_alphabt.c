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
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		continue;
	
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
