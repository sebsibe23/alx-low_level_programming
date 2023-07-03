#include "main.h"
/**
 * _strspn - Entry point
 * @str: input
 * @acc_ept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *str, char *acc_ept)
{
	unsigned int n = 0;
	int r;

	while (*str)
	{
		for (r = 0; acc_ept[r]; r++)
		{
			if (*str == acc_ept[r])
			{
			n++;
			break;
			}
			else if (acc_ept[r + 1] == '\0')
			return (n);
		}
		str++;
	}
	return (n);
}
