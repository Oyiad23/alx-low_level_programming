#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t car, nwr;
	char *y;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	y = malloc(sizeof(char) * (letters));
	if (!y)
		return (0);

	car = read(x, y, letters);
	nwr = write(STDOUT_FILENO, y, car);

	close(x);

	free(y);

	return (nwr);
}
