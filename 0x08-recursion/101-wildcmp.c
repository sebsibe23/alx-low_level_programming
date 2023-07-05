#include "main.h"

/**
 * wildcmp - Compare strings
 * @str1: pointer to string params
 * @str2: pointer to string params
 * Return: 0
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0')
	{
		if (*str2 != '\0' && *str2 == '*')
		{
			return (wildcmp(str1, str2 + 1));
		}
	return (*str2 == '\0');
	}

	if (*str2 == '*')
	{
		return (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1));
	}
	else if (*str1 == *str2)
	{
		return (wildcmp(str1 + 1, str2 + 1));
	}
	return (0);
}
