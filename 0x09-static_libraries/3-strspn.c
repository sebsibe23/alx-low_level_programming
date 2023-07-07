#include "main.h"
/**
 * _strspn - Entry p.oint.
 * @str: input.
 * @str_accept: input.
 * Return: return Always 0 (Success).
 */
unsigned int _strspn(char *str, char *str_accept)
{
	unsigned int num = 0;
	int r;

	while (*str)
	{
		for (r = 0; str_accept[r]; r++)
		{
			if (*str == str_accept[r])
			{
				num++;
				break;
			}
			else if (str_accept[r + 1] == '\0')
				return (num);
		}
		str++;
	}
	return (num);
}
