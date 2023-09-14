#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of arguments passed to function
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list sum_all_parameters;

	va_start(sum_all_parameters, n);

	for (x = 0; x < n; x++)
		sum += va_arg(sum_all_parameters, int);

	va_end(sum_all_parameters);

	return (sum);
}
