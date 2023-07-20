#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point, This fuction perform a calulaction base on 2 numbers and
 * the given operator.
 * @argc: number of agruments
 * @argv: the string value of the arguments.
 *
 * Return: 0 (on Sucess)
 */


int main(int argc, char **argv) {

	int i;

	int num_bytes = atoi(argv[1]);

	unsigned char *ptr = (unsigned char *)main;


	for (i = 0; i < num_bytes; i++) {
		printf("%02x ", *ptr);
		ptr++;
	}
	printf("\n");

	return 0;
}
