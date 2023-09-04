#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (n > y)
	{
		if (src[y] == '\0')
		{
			for (; y < n; y++)
			{
				dest[x] = '\0';
				x++;
			}
		}
		else
		{
			dest[x] = src[y];
			y++;
			x++;
		}
	}

	return (dest);
}
