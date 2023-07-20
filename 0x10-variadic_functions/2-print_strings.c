#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, then adds a new line after that.
 * @separator: Between strings will be printed the string..
 * @n: The number of strings that have been passed to the function.
 * @...: There will be A variable number of strings printed..
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_ings;
	char *str;
	unsigned int ind_ex;

	va_start(str_ings, n);

	for (ind_ex = 0; ind_ex < n; ind_ex++)
	{
		str = va_arg(str_ings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (ind_ex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str_ings);
}
