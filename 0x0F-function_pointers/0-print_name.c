#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name using the pointer to function.
 * @name: string to be added.
 * @f: pointer to point to function.
 * Return: return nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
