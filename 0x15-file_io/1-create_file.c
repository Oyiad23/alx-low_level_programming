#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len_letters;
	int read_write_read;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len_letters = 0; text_content[len_letters]; len_letters++)
		;

	read_write_read = write(fd, text_content, len_letters);

	if (read_write_read == -1)
		return (-1);

	close(fd);

	return (1);
}
