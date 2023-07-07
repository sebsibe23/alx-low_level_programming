#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @de_st: input value.
 * @sr_c: input value.
 *
 * Return: void no no return.
 */
char *_strcat(char *de_st, char *sr_c)
{
	int i;
	int j;

	i = 0;
	while (de_st[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (sr_c[j] != '\0')
	{
		de_st[i] = sr_c[j];
		i++;
		j++;
	}

	de_st[i] = '\0';
	return (de_st);
}
