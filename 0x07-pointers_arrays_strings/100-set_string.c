#include "main.h"

/**
 * set_string - changes a pointer's value to a char
 * @str: pointer to pointer
 * @to: pointer char
 */

void set_string(char **str, char *to)
{
	*str = to;
}
