#include "main.h"
#include <stdlib.h>

/**
 *_strdup - allocate a string
 *@str: string
 *Return: pointer to string if success
*/

char *_strdup(char *str)
{
	int x;
	char *str1;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
	;
	x++;
	str1 = malloc(sizeof(char) * x);

	if (str1 == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		str1[x] = str[x];
	str1[x] = '\0';
	return (str1);
}
