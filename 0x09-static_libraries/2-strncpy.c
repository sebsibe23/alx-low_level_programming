#include "main.h"
/**
 * _strncpy - copy a string
 * @str_dest: input value
 * @str_src: input value
 * @strin_put: input value
 *
 * Return: str_dest
 */
char *_strncpy(char *str_dest, char *str_src, int strin_put)
{
	int k;

	k = 0;
	while (k < strin_put && str_src[k] != '\0')
	{
		str_dest[k] = str_src[k];
		k++;
	}
	while (k < strin_put)
	{
		str_dest[k] = '\0';
		k++;
	}

	return (str_dest);
}
