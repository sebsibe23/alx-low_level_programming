#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its parameters is returned.
 * @n: The number of parameters that were passed to the function.
 * @...: A variable number of parameters are used to compute the sum of.
 *
 * Return: Return If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list strap;
	unsigned int j, strsum = 0;

	va_start(strap, n);

	for (j = 0; j < n; j++)
	strsum += va_arg(strap, int);

	va_end(strap);

	return (strsum);
}
