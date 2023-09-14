#include "variadic_functions.h"

/**
 * print_strings -  prints formated strings
 * @separator: symbol between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list format_list;

	va_start(format_list, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(format_list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && x == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(format_list);
}
