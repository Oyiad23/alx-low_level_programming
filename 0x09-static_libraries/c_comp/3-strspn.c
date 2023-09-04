#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, a_len = 0, len = 0;

	while (accept[a_len] != '\0')
		a_len++;
	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; y < a_len; y++)
			if (s[x] == accept[y])
				len++, y = a_len;
			else
				if (y == a_len - 1)
					goto exit;
exit: return (len);
}
