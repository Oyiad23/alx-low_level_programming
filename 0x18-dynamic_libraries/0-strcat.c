#include "main.h"

/**
 *_strcat - concatinate 2 strings.
 *@dest: string 1
 *@src:  string 2
 *Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	dest[i] = '\0';

	return (dest);
}
