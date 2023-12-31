#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int char_size, base_2;

	if (!b)
		return (0);

	ui = 0;

	for (char_size = 0; b[char_size] != '\0'; char_size++)
		;

	for (char_size--, base_2 = 1; char_size >= 0; char_size--, base_2 *= 2)
	{
		if (b[char_size] != '0' && b[char_size] != '1')
		{
			return (0);
		}

		if (b[char_size] & 1)
		{
			ui += base_2;
		}
	}

	return (ui);
}
