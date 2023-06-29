#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @t: pointer to string params
 *
 * Return: *t
 */

char *rot13(char *t)
{
	int i;
	int k;
	char strarr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char strarr1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; t[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (t[i] == strarr[k])
			{
				t[i] = strarr1[k];
				break;
			}
		}
	}
	return (t);
}
