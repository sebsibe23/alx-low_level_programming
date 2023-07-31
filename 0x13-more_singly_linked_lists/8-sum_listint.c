#include "lists.h"

/**
 * sum_listint - computes the total of all data in a listint_t list.
 * @head: starting node in the linked list.
 *
 * Return: final return resulting sum.
 */
int sum_listint(listint_t *head)
{
	int intsum = 0;
	listint_t *lsptemp = head;

	while (lsptemp)
	{
		intsum += lsptemp->n;
		lsptemp = lsptemp->next;
	}

	return (intsum);
}
