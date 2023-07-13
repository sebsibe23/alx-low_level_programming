#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if the string contains a non-digit char
 * @strs: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *strs)
{
	int j = 0;

	while (strs[j])
	{
		if (strs[j] < '0' || strs[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen - returns a length of a string
 * @strs: the string to be evaluate
 *
 * Return: return the length of the string
 */
int _strlen(char *strs)
{
	int i = 0;

	while (strs[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
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
	char *str_s1, *str_s2;
	int str_len1, str_len2, str_len, i, str_carry, digit_1, digit_2, *strresult, stra = 0;

	str_s1 = argv[1], str_s2 = argv[2];
	if (argc != 3 || !is_digit(str_s1) || !is_digit(str_s2))
		errors();
	str_len1 = _strlen(str_s1);
	str_len2 = _strlen(str_s2);
	str_len = str_len1 + str_len2 + 1;
	strresult = malloc(sizeof(int) * str_len);
	if (!strresult)
		return (1);
	for (i = 0; i <= str_len1 + str_len2; i++)
		strresult[i] = 0;
	for (str_len1 = str_len1 - 1; str_len1 >= 0; str_len1--)
	{
		digit_1 = str_s1[str_len1] - '0';
		str_carry = 0;
		for (str_len2 = _strlen(str_s2) - 1; str_len2 >= 0; str_len2--)
		{
			digit_2 = str_s2[str_len2] - '0';
			str_carry += strresult[str_len1 + str_len2 + 1] + (digit_1 * digit_2);
			strresult[str_len1 + str_len2 + 1] = str_carry % 10;
			str_carry /= 10;
		}
		if (str_carry > 0)
		strresult[str_len1 + str_len2 + 1] += str_carry;
	}
	for (i = 0; i < str_len - 1; i++)
	{
		if (strresult[i])
			stra = 1;
		if (stra)
			_putchar(strresult[i] + '0');
	}
	if (!stra)
		putchar('0');
	_putchar('\n');
	free(strresult);
	return (0);
}
