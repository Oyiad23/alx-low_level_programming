#include "main.h"

/**
 * _memcpy - input copies n bytes
 * @dest: area where bytes are copied to
 * @src: area where bytes are copied from
 * @n: number of bytes to copy
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
