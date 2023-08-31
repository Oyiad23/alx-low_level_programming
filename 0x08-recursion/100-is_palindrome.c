i#include "main.h"

/**
 * palindrome_ret - returns length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindrome_ret(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palindrome_ret(a + 1, l + 1));
}
/**
 * palindrome_comp - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palindrome_comp(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindrome_comp(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palindrome_ret(s, 0);
	return (palindrome_comp(s, l));
}
