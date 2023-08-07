
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * 
 * append_text_to_file -  append tect to a file.
 * @filename: test file to be read.
 * @text_content:  text_content is a NULL terminated string to write to the file
 * Return:  1 on success, -1 on failure.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
}
