
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
	int file_desc;

	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename,  O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
		return (1);
}
