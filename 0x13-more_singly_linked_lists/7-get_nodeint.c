#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the certain index.
 * @head: the starting node in the linked list.
 * @index: index of the node to return.
 *
 * Return: return pointer to the node we're looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int o = 0;
	listint_t *lsptemp = head;

	while (lsptemp && o < index)
	{
		lsptemp = lsptemp->next;
		o++;
	}

	return (lsptemp ? lsptemp : NULL);
}
