#include "main.h"

/**
 * _isdigit - checks whether it is a digit or not
 * @num: int to be checked
 * Return: 1 if num is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	return (1);

	return (0);
}
