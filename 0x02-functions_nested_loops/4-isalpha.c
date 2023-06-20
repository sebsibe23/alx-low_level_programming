#include "main.h"

/**
 * _isalpha - checks for the presence of an alphabetic character
 * @d: the character to be examined
 * Return: 1 if d is a letter, 0 otherwise
 */
int _isalpha(int d)
{
        return ((d >= 'a' && d <= 'z') || (d >= 'A' &&d <= 'Z'));
}
