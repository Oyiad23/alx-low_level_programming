#include "main.h"
/**
 * _strlen - find the length of a string
 *
 * @s: string lenth to check
 *
 *  Return: void
 */

int _strlen(char *s)
{

	int l = 0;

	while (s[l])
	l++;

	return (l);

