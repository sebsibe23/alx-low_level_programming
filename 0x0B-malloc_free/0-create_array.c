#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size strsize and assign char strchar.
 * @strsize: size of array.
 * @strchar: char to assign.
 * Description: creat array of size strsize and assign char strchar.
 * Return: return pointer to array, NULL if fail.
 *
 */
char *create_array(unsigned int strsize, char strchar)
{
char *str_string;
unsigned int i;
str_string = malloc(sizeof(char) * strsize);
if (strsize == 0 || str_string == NULL)
return (NULL);
for (i = 0; i < strsize; i++)
str_string[i] = strchar;
return (str_string);
}
