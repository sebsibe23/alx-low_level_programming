#include "main.h"
/**
 * _strlen - returns a string's length
 * @strin_g: string
 * Return: length
 */
int _strlen(char *strin_g)
{
	int lo_ng = 0;

	while (*strin_g != '\0')
	{
		lo_ng++;
		strin_g++;
	}

	return (lo_ng);
}
