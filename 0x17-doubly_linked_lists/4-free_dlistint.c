#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - the func frees a dlistint_t list.
 * @head: a head of the linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *varnext_node;
	int freed_nodes = 0;

	while (head != NULL)
	{
		varnext_node = head->next;
		free(head);
		head = varnext_node;
		freed_nodes++;
	}
}
