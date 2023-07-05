#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *str)
{
	int long_it = 0;

	if (*str)
	{
		long_it++;
		long_it += _strlen_recursion(str + 1);
	}

	return (long_it);
}
