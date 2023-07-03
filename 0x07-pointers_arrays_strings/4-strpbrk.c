#include "main.h"
/**
 * _strpbrk - Entry point
 * @str: input
 * @acc_ept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *str, char *acc_ept)
{
	int k;

	while (*str)
	{
		for (k = 0; acc_ept[k]; k++)
		{
			if (*str == acc_ept[k])
			return (str);
		}
		str++;
	}

	return ('\0');
}
