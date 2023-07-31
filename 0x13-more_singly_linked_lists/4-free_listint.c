#include "lists.h"
/**
 * free_listint - function frees a linked list.
 * @head:listint_t list will be freed from linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *lstemp;

	while (head)
	{
		lstemp = head->next;
		free(head);
		head = lstemp;
	}
}
