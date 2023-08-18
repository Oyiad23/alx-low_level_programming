#include "main.h"

/**
* print_number - Prints an integer
* @i: The number to print
*
*/

void print_number(int i)
{
	unsigned int num = i;

	if (i < 0)
	{
	_putchar('-');
	num = -num;
	}
	if (num > 9)
	{
	print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
