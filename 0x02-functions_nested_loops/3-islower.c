#include "main.h"

/**
 * _islower - check to see if the character is lowercase
 * @q: the char needs to be verified
 * If q is lowercase, return 1; otherwise, return 0.
 */

int _islower(int q)
{
        if (q >= 'a' && q <= 'z')
                return (1);
        else
                return (0);
}
