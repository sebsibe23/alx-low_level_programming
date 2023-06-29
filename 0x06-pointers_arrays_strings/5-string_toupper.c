#include "main.h"
/**
 * string_toupper - transform all lowercase letters to uppercase letters
 * @y: pointer
 *
 * Return: y
 */
char *string_toupper(char *y)
{
	int i;

	i = 0;
	while (y[i] != '\0')
	{
		if (y[i] >= 'a' && y[i] <= 'z')
			y[i] = y[i] - 32;
		i++;
	}
	return (y);
}
