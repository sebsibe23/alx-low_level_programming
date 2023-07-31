#include "lists.h"

/**
 * delete_nodeint_at_index - fun deletes a
 *	 linked list node at a specific index.
 * @head: a pointer to the starting element in the list.
 * @index: a index of the node to be delete.
 *
 * Return: return 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *lsptemp = *head;
	listint_t *lspcurrent = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(lsptemp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!lsptemp || !(lsptemp->next))
			return (-1);
		lsptemp = lsptemp->next;
		j++;
	}


	lspcurrent = lsptemp->next;
	lsptemp->next = lspcurrent->next;
	free(lspcurrent);

	return (1);
}
