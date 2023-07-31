#include "lists.h"

/**
 * insert_nodeint_at_index - func inserts the new node in the linked list
 * at a given position.
 * @head: a pointer to the starting node in the list.
 * @idx: the index where the new node is added.
 * @n: a data to insert in a new node.
 *
 * Return: return pointer to a new node, or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int f;
	listint_t *lspnew;
	listint_t *lsptemp = *head;

	lspnew = malloc(sizeof(listint_t));
	if (!lspnew || !head)
		return (NULL);

	lspnew->n = n;
	lspnew->next = NULL;

	if (idx == 0)
	{
		lspnew->next = *head;
		*head = lspnew;
		return (lspnew);
	}

	for (f = 0; lsptemp && f < idx; f++)
	{
		if (f == idx - 1)
		{
			lspnew->next = lsptemp->next;
			lsptemp->next = lspnew;
			return (lspnew);
		}
		else
			lsptemp = lsptemp->next;
	}

	return (NULL);
}
