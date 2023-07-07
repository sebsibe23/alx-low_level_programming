#include "main.h"

/**
 * _abs - calculates an integer's absolute value.
 * @str_int: the int for review
 * Return: the absolute value of int
 */
int _abs(int str_int)
{
	if (str_int >= 0)
	{
		return (str_int);
	}
	return (-str_int);
}
