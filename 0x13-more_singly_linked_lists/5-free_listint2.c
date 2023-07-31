#include "lists.h"

/**
 * free_listint2 - a function used to frees the linked list.
 * @head: pointer to the listint_t list will be freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *lstemp;

	if (head == NULL)
		return;

	while (*head)
	{
		lstemp = (*head)->next;
		free(*head);
		*head = lstemp;
	}

	*head = NULL;
}
