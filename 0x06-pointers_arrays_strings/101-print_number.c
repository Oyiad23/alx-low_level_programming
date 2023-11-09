#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int numb = n;

	if (n < 0)
	{
		_putchar(45);
		numb = -numb;
	}
	if (numb / 10)
	{
		print_number(numb / 10);
	}
	_putchar(numb % 10 + '0');
}
