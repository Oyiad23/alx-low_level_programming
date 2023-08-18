#include "main.h"

/**
 * _isdigit - checks whether it is a digit or not
 * @num: int to be checked
 * Return: 1 if num is a digit, 0 if not
 */

int _isdigit(int num)
{
	if ((num >= 48) && (num <= 57))
	return (1);

	return (0);
}
