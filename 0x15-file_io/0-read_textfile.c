#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile -  reads a text file and print it to POSIX.
 * @filename: test file to be read.
 * @letters: number of letters it should read and print.
 * Return: actual number of letters it could read and print.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t read, error;
	char *buf;

	if (!filename || !letters)
		return (0);

	file = fopen(filename, O_RDONLY);
	if (!file)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
	{
		fclose(file);
		return (0);
	}

	read = fread(buf, sizeof(char), letters, file);
	if (read < 0)
	{
		free(buf);
		fclose(file);
		return (0);
	}
	buf[read] = '\0';
	error = write(STDOUT_FILENO, buf, rd);
	free(buf);
	fclose(file);

	return (read);
}
