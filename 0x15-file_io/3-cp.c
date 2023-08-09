#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 *  copy_file -  append tect to a file.
 * @file_from: test file to be read.
 * @file_to:  text_content is a NULL termina
 * Return:  0 on success, -1 on failure.
 */
	void
copy_file(const char *file_from, const char *file_to)
{

	int fd1, fd2;
	FILE *file1;
	char buffer[2048];
	ssize_t n;

	fd1 = 0;
	file1 = fopen(file_from, "r");
	if (file1 == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd2 == -1)
	{

		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_to);
		exit(99);
	}

	n = read(fileno(file1), buffer, 2048);
	while (n > 0)
	{
		if (write(fd2, buffer, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);

		}
		n = read(fileno(file1), buffer, 2048);

	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

}
/**
 * main - This program copies the content of one file into another
 * @argc: argument count.
 * @argv: argoument values.
 *
 * Return: 0 (SUCCESS)
 */

	int
main(int argc, char *argv[])
{
	const char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
