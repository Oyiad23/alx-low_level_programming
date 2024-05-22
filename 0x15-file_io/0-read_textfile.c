#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_lett_read, len_lett_write;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	num_lett_read = read(fd, buff, letters);
	close(fd);
	if (num_lett_read == -1)
	{
		free(buff);
		return (0);
	}
	len_lett_write = write(STDOUT_FILENO, buff, num_lett_read);
	free(buff);
	if (num_lett_read != len_lett_write)
		return (0);
	return (len_lett_write);
}
