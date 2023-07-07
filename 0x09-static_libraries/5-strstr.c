#include "main.h"
/**
 * _strstr - Entry point.
 * @hay_stack: input.
 * @need_le: input.
 * Return: return Always 0 (Success).
 */
char *_strstr(char *hay_stack, char *need_le)
{
	for (; *hay_stack != '\0'; hay_stack++)
	{
		char *l = hay_stack;
		char *j = need_le;

		while (*l == *j && *j != '\0')
		{
			l++;
			j++;
		}

		if (*j == '\0')
			return (hay_stack);
	}

	return (0);
}
