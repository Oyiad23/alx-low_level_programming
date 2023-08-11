#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digits of base 16 followed by new line
 *
 * Return: Always  0 (success)
 */

int main(void)

{
	char base_16;

	for (base_16 = 48; base_16 <= 57; base_16++)
	{
		putchar(base_16);
	}

	for (base_16 = 97; base_16 <= 102; base_16++)
	{
		putchar(base_16);
	}

	putchar ('\n');

	return (0);

}
