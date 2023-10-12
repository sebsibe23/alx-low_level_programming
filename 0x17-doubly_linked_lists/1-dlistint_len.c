#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - the func returns the number of
 * elements in a linked dlistint_t list.
 * @h: the head of a linked list.
 *
 * Return: the number of elements in the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
