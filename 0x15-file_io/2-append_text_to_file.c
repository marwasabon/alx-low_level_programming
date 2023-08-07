
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file -  append tect to a file.
 * @filename: test file to be read.
 * @text_content:  text_content is a NULL terminated.
 * Return:  1 on success, -1 on failure.
 */
	int
append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	FILE *file = fopen(filename, "w");

	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (feof(file))
		{
			fputs(text_content, file);

			fclose(file);
			return (1);
		}
		fclose(file);
		return (-1);
	}
}
