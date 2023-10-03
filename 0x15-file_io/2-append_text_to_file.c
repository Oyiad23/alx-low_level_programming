#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content
 * Return: returns  1 if the file exists. -1 if the fails
 * does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int kkb;
	int num;
	int append;

	if (!filename)
		return (-1);

	kkb = open(filename, O_WRONLY | O_APPEND);

	if (kkb == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
		{
		append = write(kkb, text_content, num);
		}
		if (append == -1)
			return (-1);
	}

	close(kkb);

	return (1);
}
