#include "main.h"
/**
 * _strchr - Entry point
 * @f: input
 * @ch: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *f, char ch)
{
	int i = 0;

	for (; f[i] >= '\0'; i++)
	{
		if (f[i] == ch)
		return (&f[i]);
	}
	return (0);
}
