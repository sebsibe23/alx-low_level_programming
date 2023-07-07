#include "main.h"
/**
 * _strcmp - compare string values.
 * @str_string1: input value.
 * @str_string2: input value.
 *
 * Return: return str_string1[i] - str_string2[i].
 */
int _strcmp(char *str_string1, char *str_string2)
{
	int i;

	i = 0;
	while (str_string1[i] != '\0' && str_string2[i] != '\0')
	{
		if (str_string1[i] != str_string2[i])
		{
			return (str_string1[i] - str_string2[i]);
		}
	i++;
	}
	return (0);
}
