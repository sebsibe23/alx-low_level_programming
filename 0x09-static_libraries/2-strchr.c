#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @strn: input
 * @ch_ar: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *strn, char ch_ar)
{
	int i = 0;

	for (; strn[i] >= '\0'; i++)
	{
		if (strn[i] == ch_ar)
			return (&strn[i]);
	}
	return (0);
}
