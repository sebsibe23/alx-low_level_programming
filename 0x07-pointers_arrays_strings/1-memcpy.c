#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@de_st: memory where data is stored
 *@sr_c: memory where is copied
 *@n: amount of bytes
 *
 *Return: memory copied with n bytes modified
 */
char *_memcpy(char *de_st, char *sr_c, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		de_st[r] = sr_c[r];
		n--;
	}
	return (de_st);
}
