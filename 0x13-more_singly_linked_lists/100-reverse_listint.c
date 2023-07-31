#include "lists.h"

/**
 * reverse_listint - used to reverses the linked list.
 * @head: a pointer to the starting node in the list.
 *
 * Return: return a pointer to the starting node in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *lspprev = NULL;
	listint_t *lspnext = NULL;

	while (*head)
	{
		lspnext = (*head)->next;
		(*head)->next = lspprev;
		lspprev = *head;
		*head = lspnext;
	}

	*head = lspprev;

	return (*head);
}
