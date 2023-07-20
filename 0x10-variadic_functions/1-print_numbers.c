#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, then a new line.
 * @separator: The string that will be printed between the numbers.
 * @n: The function was passed a number of integers.
 * @...: A number of different numbers will be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list strnums;
	unsigned int ind_ex;

	va_start(strnums, n);

	for (ind_ex = 0; ind_ex < n; ind_ex++)
	{
		printf("%d", va_arg(strnums, int));

		if (ind_ex != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(strnums);
}
