#include "main.h"

/**
 * _atoi - convert a string into an integer
 *
 * @str_ing: the string to use
 *
 * Return: integer
 */

int _atoi(char *str_ing)
{
	int str_sign = 1, i = 0;
	unsigned int str_res = 0;

	while (!(str_ing[i] <= '9' && str_ing[i] >= '0') && str_ing[i] != '\0')
	{
		if (str_ing[i] == '-')
			str_sign *= -1;
		i++;
	}
	while (str_ing[i] <= '9' && (str_ing[i] >= '0' && str_ing[i] != '\0'))
	{
		str_res = (str_res * 10) + (str_ing[i] - '0');
		i++;
	}
	str_res *= str_sign;
	return (str_res);
}
