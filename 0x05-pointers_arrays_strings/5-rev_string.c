#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rv_ = s[0];
	int count_ = 0;
	int i;

	while (s[count_] != '\0')
	count_++;
	for (i = 0; i < count_; i++)
	{
		count_--;
		rv_ = s[i];
		s[i] = s[count_];
		s[count_] = rv_;
	}
}
