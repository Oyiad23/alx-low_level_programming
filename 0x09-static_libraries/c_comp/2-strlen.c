#include "main.h"

/**
 * _strlen - calculates the length of a string
 *
 * @s: the string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int x;
	int len = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		len++;
	}
	return (len);
}
