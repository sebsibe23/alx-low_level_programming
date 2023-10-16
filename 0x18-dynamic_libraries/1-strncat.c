#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from s_rc
 * @d_est: input value
 * @s_rc: input value
 * @n: input value
 *
 * Return: d_est
 */
char *_strncat(char *d_est, char *s_rc, int n)
{
	int i;
	int m;

	i = 0;
	while (d_est[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (m < n && s_rc[m] != '\0')
	{
	d_est[i] = s_rc[m];
	i++;
	m++;
	}
	d_est[i] = '\0';
	return (d_est);
}
