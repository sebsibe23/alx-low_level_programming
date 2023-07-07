#include "main.h"
/**
 * _strncat - combine two strings
 * utilizing n_um bytes from the s_rc at most
 * @des_t: input value
 * @s_rc: input value
 * @n_um: input value
 *
 * Return: des_t
 */
char *_strncat(char *des_t, char *s_rc, int n_um)
{
	int i;
	int y;

	i = 0;
	while (des_t[i] != '\0')
	{
		i++;
	}
	y = 0;
	while (y < n_um && s_rc[y] != '\0')
	{
		des_t[i] = s_rc[y];
		i++;
		y++;
	}
	des_t[i] = '\0';
	return (des_t);
}
