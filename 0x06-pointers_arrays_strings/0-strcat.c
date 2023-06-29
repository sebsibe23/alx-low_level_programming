#include "main.h"
/**
 * _strcat - concatenates two strings
 * @de_st: input value
 * @s_rc: input value
 *
 * Return: void
 */
char *_strcat(char *de_st, char *s_rc)
{
	int x;
	int y;

	x = 0;
	while (de_st[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (s_rc[y] != '\0')
	{
		de_st[x] = s_rc[y];
		x++;
		y++;
	}

	de_st[x] = '\0';
	return (de_st);
}
