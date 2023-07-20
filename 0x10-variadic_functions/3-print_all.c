#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything.
 * @format: a list of the different types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int k = 0;
	char *st_r, *str_sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", str_sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", str_sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", str_sep, va_arg(list, double));
					break;
				case 's':
					st_r = va_arg(list, char *);
					if (!st_r)
						st_r = "(nil)";
					printf("%s%s", str_sep, st_r);
					break;
				default:
					k++;
					continue;
			}
			str_sep = ", ";
			k++;
		}
	}

	printf("\n");
	va_end(list);
}
