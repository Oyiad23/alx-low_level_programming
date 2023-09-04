#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @num: int to be checked
 * Return: 1 if num is a digit, 0 otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
