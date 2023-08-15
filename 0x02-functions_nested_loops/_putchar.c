#include <unistd.h>

/**
 * main - program prints text as output
 *
 * Return: 0 (success)
 *
 */

int _putchar(char a)
	{
		return (write(1,&a,1));

	}
