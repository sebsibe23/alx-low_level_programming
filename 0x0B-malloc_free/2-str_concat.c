#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combine the input's ends at the end for size.
 * @s1: input one to combine
 * @s2: input two to combin.
 * Return: combine of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str_conct;
	int i, str_ci;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	i = str_ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[str_ci] != '\0')
		str_ci++;
	str_conct = malloc(sizeof(char) * (i + str_ci + 1));
	if (str_conct == NULL)
		return (NULL);
	i = str_ci = 0;
	while (s1[i] != '\0')
	{
		str_conct[i] = s1[i];
		i++;
	}
	while (s2[str_ci] != '\0')
	{
		str_conct[i] = s2[str_ci];
		i++, str_ci++;
	}
	str_conct[i] = '\0';
	return (str_conct);
}
