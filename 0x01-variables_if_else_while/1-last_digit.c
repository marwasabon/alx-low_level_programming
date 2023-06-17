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
	int n;
	int last_digit;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{

		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
