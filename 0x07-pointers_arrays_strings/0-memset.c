#include "main.h"

/**
 * _memset - fills string with constant byte b upto n bytes
 * @s: input pointer to string
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
