#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program to print alphabet letters in reverse followed by new line
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char alphabet;

	for (alphabet = 122 ; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
