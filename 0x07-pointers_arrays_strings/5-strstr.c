#include "main.h"

/**
 * _strstr - returns pointer to first char of matching substring
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return:Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int k;

	while (*haystack != '\0')
	{
		k = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
			haystack++, needle++, k++;
		if (*needle == '\0')
			return (haystack - k);
		haystack -= (k - 1), needle -= k;
	}
	return ('\0');
}
