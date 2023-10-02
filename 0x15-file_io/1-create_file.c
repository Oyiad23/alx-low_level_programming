#include "main.h"
/**
 * create_file -creates an array of char
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to be create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, ncount = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ncount = 0; text_content[ncount];)
			ncount++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, ncount);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
