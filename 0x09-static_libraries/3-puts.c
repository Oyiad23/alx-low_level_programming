#include "main.h"

/**
 * _puts - prints a string followed by a new line..
 *
 *@str: the string to print.
 *
 */

void _puts(char *str)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
