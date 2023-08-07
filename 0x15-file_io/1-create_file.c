
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 *  create_file -  creates a file.
 * @filename: test file to be read.
 * @text_content:  text_content is a NULL.
 * Return:  1 on success, -1 on failure.
 */

	int
create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (file == NULL)
	{
		return (-1);
	}
	file = fopen(filename, "w");

	if (file == NULL)
	{
		return (-1);
	}
	if (!text_content)
	{
		file = fopen(filename, "w");
	}
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
		fclose(file);
		return (-1);
	}
	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
