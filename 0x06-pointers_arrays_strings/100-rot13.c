#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the address of the resulting string
 */

char *rot13(char *s)
{
	int i, j;

	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}

	return (s);
}
