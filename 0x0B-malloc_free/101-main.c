#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry.
 * @ac: int input.
 * @av: double pointer array.
 * Return: return 0.
 */
char *argstostr(int ac, char **av)
{
	int i, m, t = 0, p = 0;
	char *str_string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
		p++;
	}
	p += ac;
	str_string = malloc(sizeof(char) * p + 1);
	if (str_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (m = 0; av[i][m]; m++)
		{
			str_string[t] = av[i][m];
			t++;
		}
		if (str_string[t] == '\0')
		{
			str_string[t++] = '\n';
		}
	}
	return (str_string);
}
