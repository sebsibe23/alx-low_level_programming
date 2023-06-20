#include "main.h"

/**
 * _islower - check to see if the character is lowercase
 * @c: the char needs to be verified
 * If char is lowercase, return 1; otherwise, return 0.
 */

int _islower(int q)
{
        if (q >= 'a' && q <= 'z')
                return (1);
        else
                return (0);
}
