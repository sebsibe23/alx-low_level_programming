#include "main.h"
/**
 * _strstr - Entry point
 * @hay_stack: input
 * @need_le: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *hay_stack, char *need_le)
{
	for (; *hay_stack != '\0'; hay_stack++)
	{
		char *l = hay_stack;
		char *pr = need_le;

		while (*l == *pr && *pr != '\0')
		{
			l++;
			pr++;
		}

		if (*pr == '\0')
		return (hay_stack);
	}

	return (0);
}
