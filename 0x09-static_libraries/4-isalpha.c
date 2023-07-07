#include "main.h"

/**
 * _isalpha - checks for the presence of an alphabetic character.
 * @chr: character to be verified.
 * Return: 1 if chr is a letter, 0 otherwise.
 */
int _isalpha(int chr)
{
	return ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'));
}
