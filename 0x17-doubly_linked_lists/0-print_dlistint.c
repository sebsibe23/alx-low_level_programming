#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - the function prints
 * all the elements of a list.
 * @h: the pointer to head of list.
 * Return: return number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
