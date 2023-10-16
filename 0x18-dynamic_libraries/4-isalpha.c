#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @s: the character to be checked.
 * Return: 1 if s is a letter, 0 otherwise.
 */
int _isalpha(int s)
{
	return ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'));
}
