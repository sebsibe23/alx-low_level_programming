#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by sr_c
 * @de_st: copy to
 * @sr_c: copy from
 * Return: string
 */
char *_strcpy(char *de_st, char *sr_c)
{
	int l = 0;
	int x = 0;

	while (*(sr_c + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		de_st[x] = sr_c[x];
	}
	de_st[l] = '\0';
	return (de_st);
}
