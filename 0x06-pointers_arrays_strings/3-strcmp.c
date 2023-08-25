#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 *
 * Return: 0 if equal or 1 if is different
 * Oyiadom
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0, n = 0;

	while (s1[m] != '\0' && n == 0)
	{
		n = s1[m] - s2[m];
		m++;
	}
	return (n);
}
