#include <stdlib.h>
#include "main.h"
/**
 *count_word - a utility function for counting the number of words in a string.
 *@s: to be evaluated string
 *Return: the number of words
 */
int count_word(char *s)
{
	int str_flag, d, strword;

	str_flag = 0;

	strword = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			str_flag = 0;
		else if (str_flag == 0)
		{
			str_flag = 1;
			strword++;
		}
	}
	return (strword);
}
/**
 * **strtow - converts a string into words
 * @str: split a string
 *
 * Return: return pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **strmatrix, *strtmp;

	int j, l = 0, strlen = 0, word_s, c = 0, strstart, strend;

	while (*(str + strlen))
		strlen++;
	word_s = count_word(str);
	if (word_s == 0)
		return (NULL);
	strmatrix = (char **) malloc(sizeof(char *) * (word_s + 1));
	if (strmatrix == NULL)
		return (NULL);
	for (j = 0; j <= strlen; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (c)
			{
				strend = j;
				strtmp = (char *) malloc(sizeof(char) * (c + 1));
				if (strtmp == NULL)
					return (NULL);
				while (strstart < strend)
					*strtmp++ = str[strstart++];
				*strtmp = '\0';
				strmatrix[l] = strtmp - c;
				l++;
				c = 0;
			}
		}
		else if (c++ == 0)
		strstart = j;
	}
	strmatrix[l] = NULL;
	return (strmatrix);
}
