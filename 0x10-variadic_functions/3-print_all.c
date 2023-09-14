#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";

	va_list format_list;

	va_start(format_list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(format_list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(format_list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(format_list, double));
					break;
				case 's':
					str = va_arg(format_list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(format_list);
}
