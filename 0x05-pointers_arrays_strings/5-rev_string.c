#include "main.h"

/**
 *rev_string - reverses a string
 *
 *@s: reverses the string we want to change
 *
 *Return: no return
 */
void rev_string(char *s)
{
	int i;
	int j;
	char kkb[1000];

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(s + j) != '\0')
	{

		kkb[j] = *(s + j);
		j++;
	}

	j = 0;
	while (i >= 0)
	{
		s[j] = kkb[i - 1];
		i--;
		j++;
	}
}
