#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char or not.
 * @s: string to be evaluated.
 *
 * Return: return 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int stri = 0;

	while (s[stri])
	{
		if (s[stri] < '0' || s[stri] > '9')
			return (0);
		stri++;
	}
	return (1);
}

/**
 * _strlen - returns the length of the string.
 * @s: the string to check.
 *
 * Return: return the length of the string.
 */
int _strlen(char *s)
{
	int stri = 0;

	while (s[stri] != '\0')
	{
		stri++;
	}
	return (stri);
}

/**
 * errors - handles the errors for main function
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies the two positive numbers.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 *
 * Return: return always 0 (Success).
 */
int main(int argc, char *argv[])
{
	char *strs11, *strs2;
	int ln_1, ln_2, ln_0, i, carr_y, dig_t1, dig_t2, *strres, a = 0;

	strs11 = argv[1], strs2 = argv[2];
	if (argc != 3 || !is_digit(strs11) || !is_digit(strs2))
		errors();
	ln_1 = _strlen(strs11);
	ln_2 = _strlen(strs2);
	ln_0 = ln_1 + ln_2 + 1;
	strres = malloc(sizeof(int) * ln_0);
	if (!strres)
		return (1);
	for (i = 0; i <= ln_1 + ln_2; i++)
		strres[i] = 0;
	for (ln_1 = ln_1 - 1; ln_1 >= 0; ln_1--)
	{
		dig_t1 = strs11[ln_1] - '0';
		carr_y = 0;
		for (ln_2 = _strlen(strs2) - 1; ln_2 >= 0; ln_2--)
		{
			dig_t2 = strs2[ln_2] - '0';
			carr_y += strres[ln_1 + ln_2 + 1] + (dig_t1 * dig_t2);
			strres[ln_1 + ln_2 + 1] = carr_y % 10;
			carr_y /= 10;
		}
		if (carr_y > 0)
			strres[ln_1 + ln_2 + 1] += carr_y;
	}
	for (i = 0; i < ln_0 - 1; i++)
	{
		if (strres[i])
			a = 1;
		if (a)
			_putchar(strres[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(strres);
	return (0);
}
