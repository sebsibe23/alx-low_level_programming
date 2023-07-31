#include "lists.h"

/**
 * pop_listint - func used to deletes the head node of the linked list.
 * @head: pointer to the starting element in a linked list.
 *
 * Return: return the data inside the elements that was cleared.
 * or 0 if the list has been empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *lsptemp;
	int intnum;

	if (!head || !*head)
		return (0);

	intnum = (*head)->n;
	lsptemp = (*head)->next;
	free(*head);
	*head = lsptemp;

	return (intnum);
}
