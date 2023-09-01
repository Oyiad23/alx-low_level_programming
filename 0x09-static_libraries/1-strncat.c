#include "main.h"

/**
 *_strncat - concatinate 2 strings.
 *@dest: string 1
 *@src: string 2
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && n > y)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	if (n > 0)
	{
		dest[x] = '\0';
	}

	return (dest);
}
