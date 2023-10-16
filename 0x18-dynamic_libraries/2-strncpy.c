#include "main.h"
/**
 * _strncpy - copy a string
 * @d_est: input value
 * @src: input value
 * @n: input value
 *
 * Return: d_est
 */
char *_strncpy(char *d_est, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		d_est[k] = src[k];
		k++;
	}
	while (k < n)
	{
		d_est[k] = '\0';
		k++;
	}

	return (d_est);
}
