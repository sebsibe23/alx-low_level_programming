#include "main.h"

int check_pal(char *str, int i, int le_n);
int _strlen_recursion(char *str);

/**
 * is_palindrome - checks if a string is a palindrome
 * @str: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (check_pal(str, 0, _strlen_recursion(str)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @str: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @str: string to check
 * @i: iterator
 * @le_n: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *str, int i, int le_n)
{
	if (*(str + i) != *(str + le_n - 1))
		return (0);
	if (i >= le_n)
		return (1);
	return (check_pal(str, i + 1, le_n - 1));
}
