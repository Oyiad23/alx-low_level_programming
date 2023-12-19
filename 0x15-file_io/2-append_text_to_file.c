#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len_letters;
	int read_write_read;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len_letters = 0; text_content[len_letters]; len_letters++)
			;

		read_write_read = write(fd, text_content, len_letters);

		if (read_write_read == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
