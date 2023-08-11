#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all single digits of base 10 followed by new line
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);

}
