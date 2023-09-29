#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.If little-endian - 1.
 */

int get_endianness(void)
{
	unsigned int dig = 1;
	char *endian = (char *)&dig;

	if (*endian)
		return (1);
	return (0);

}
