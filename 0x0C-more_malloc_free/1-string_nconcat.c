#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates strn bytes of a string to another string.
 * @strs1: string to append to.
 * @strs2: string to concatenate from.
 * @strn: number of bytes from strs2 to concatenate to strs1.
 *
 * Return: return pointer to the resulting string
 */
char *string_nconcat(char *strs1, char *strs2, unsigned int strn)
{
	char *strstring;

	unsigned int i = 0, k = 0, strlen1 = 0, strlen2 = 0;

	while (strs1 && strs1[strlen1])
		strlen1++;
	while (strs2 && strs2[strlen2])
		strlen2++;
	if (strn < strlen2)
		strstring = malloc(sizeof(char) * (strlen1 + strn + 1));
	else
		strstring = malloc(sizeof(char) * (strlen1 + strlen2 + 1));
	if (!strstring)
		return (NULL);
	while (i < strlen1)
	{
		strstring[i] = strs1[i];
		i++;
	}
	while (strn < strlen2 && i < (strlen1 + strn))
		strstring[i++] = strs2[k++];
	while (strn >= strlen2 && i < (strlen1 + strlen2))
		strstring[i++] = strs2[k++];
	strstring[i] = '\0';
	return (strstring);
}
