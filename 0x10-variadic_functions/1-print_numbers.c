#include "variadic_functions.h"

/**
 * print_numbers - prints number list
 * @separator: symbol that seperates number list
 * @n: number of integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list number_list;

	va_start(number_list, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(number_list, int));
		else if (separator && x == 0)
			printf("%d", va_arg(number_list, int));
		else
			printf("%s%d", separator, va_arg(number_list, int));
	}

	va_end(number_list);
	printf("\n");
}
