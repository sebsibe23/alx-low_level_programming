#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, c, n, le_n, g, dig_t;

	i = 0;
	c = 0;
	n = 0;
	le_n = 0;
	g = 0;
	dig_t = 0;

	while (s[le_n] != '\0')
		le_n++;

	while (i < le_n && g == 0)
	{
		if (s[i] == '-')
			++c;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dig_t = s[i] - '0';
			if (c % 2)
				dig_t = -dig_t;
			n = n * 10 + dig_t;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}

	if (g == 0)
		return (0);

	return (n);
}
