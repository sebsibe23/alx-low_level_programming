#include "main.h"
/**
 *_memcpy - a method for copying memo
 *@d_est: memory where information is saved
 *@src: memory where information is copied
 *@num: the number of bytes
 *
 *Return: copied memory with num byted changed
 */
char *_memcpy(char *d_est, char *src, unsigned int num)
{
	int r = 0;
	int i = num;

	for (; r < i; r++)
	{
		d_est[r] = src[r];
		num--;
	}
	return (d_est);
}
