#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char re_v = s[0];
	int count_er = 0;
	int i;

	while (s[count_er] != '\0')
	count_er++;
	for (i = 0; i < count_er; i++)
	{
		count_er--;
		re_v = s[i];
		s[i] = s[count_er];
		s[count_er] = re_v;
	}
}
