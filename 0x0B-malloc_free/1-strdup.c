#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - The data was duplicated to a new memory location.
 * @str: char.
 * Return: return 0.
 */
char *_strdup(char *str)
{
	char *strbbb;
	int h, z = 0;

	if (str == NULL)
	return (NULL);
	h = 0;
	while (str[h] != '\0')
		h++;
	strbbb = malloc(sizeof(char) * (h + 1));
	if (strbbb == NULL)
		return (NULL);
	for (z = 0; str[z]; z++)
		strbbb[z] = str[z];
	return (strbbb);
}
