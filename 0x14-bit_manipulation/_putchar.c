#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character
 * @c: The character to print
 *
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
