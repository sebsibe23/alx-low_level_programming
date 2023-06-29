#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @st_r: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *st_r)
{
	int index = 0;

	while (st_r[index])
	{
		while (!(st_r[index] >= 'a' && st_r[index] <= 'z'))
			index++;

		if (st_r[index - 1] == ' ' ||
		    st_r[index - 1] == '\t' ||
		    st_r[index - 1] == '\n' ||
		    st_r[index - 1] == ',' ||
		    st_r[index - 1] == ';' ||
		    st_r[index - 1] == '.' ||
		    st_r[index - 1] == '!' ||
		    st_r[index - 1] == '?' ||
		    st_r[index - 1] == '"' ||
		    st_r[index - 1] == '(' ||
		    st_r[index - 1] == ')' ||
		    st_r[index - 1] == '{' ||
		    st_r[index - 1] == '}' ||
		    index == 0)
			st_r[index] -= 32;

		index++;
	}

	return (st_r);
}
