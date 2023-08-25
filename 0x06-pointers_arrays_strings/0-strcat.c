#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return:returns pointer to @ dest
 */

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (dest[m] != 0)
	{
		m++;
	}

	n = 0;

	while (src[n] != 0)
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	return (dest);
}
