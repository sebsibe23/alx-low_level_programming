#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @strd: struct dog to print
 */

void print_dog(struct dog *strd)
{
	if (strd == NULL)
		return;

	if (strd->name == NULL)
		strd->name = "(nil)";
	if (strd->owner == NULL)
		strd->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", strd->name, strd->age, strd->owner);
}
