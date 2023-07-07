#include "main.h"
/**
 * _strpbrk - Entry point.
 * @str_string: input.
 * @str_accept: input.
 * Return: Always 0 (Success).
 */
char *_strpbrk(char *str_string, char *str_accept)
{
	int k;

	while (*str_string)
	{
		for (k = 0; str_accept[k]; k++)
		{
			if (*str_string == str_accept[k])
			return (str_string);
		}
		str_string++;
	}

	return ('\0');
}
