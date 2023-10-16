#include "main.h"
/**
 * _strlen - returns a string's length
 * @h: string
 * Return: length
 */
int _strlen(char *h)
{
	int longi = 0;

	while (*h != '\0')
	{
	longi++;
	h++;
	}

	return (longi);
}
