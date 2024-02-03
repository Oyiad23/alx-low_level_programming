#include "main.h"

/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string to find substring in
 * @needle: substring to find match of
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack != '\0')
	{
		x = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, x++;
		if (*needle == '\0')
			return (haystack - x);
		haystack -= (x - 1), needle -= x;
	}
	return ('\0');
}
