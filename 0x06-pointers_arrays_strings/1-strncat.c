#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times of iterations
 *
 * Return: returns new concatenated string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, t;

	m = 0;

	while (dest[m] != 0)
	{
		m++;
	}

	t = 0;

	while (src[t] != 0 && t < n)
	{
		dest[m] = src[t];
		m++;
		t++;
	}
	return (dest);
}
