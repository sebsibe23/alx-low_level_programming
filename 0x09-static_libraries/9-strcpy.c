#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by str_src
 * @str_dest: copy to
 * @str_src: copy from
 * Return: string
 */
char *_strcpy(char *str_dest, char *str_src)
{
	int l = 0;
	int x = 0;

	while (*(str_src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		str_dest[x] = str_src[x];
	}
	str_dest[l] = '\0';
	return (str_dest);
}
