#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in the
 *                            list at a given position.
 * @h: A pointer to the head of a list.
 * @idx: The position to insert a new node.
 * @n: The integer for a new node to contain.
 *
 * Return: return If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int count = 0;

	while (tmp != NULL && count < idx)
	{
		tmp = tmp->next;
		count++;
	}

	if (tmp == NULL && count == idx)
		return (add_dnodeint_end(h, n));

	if (tmp == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp->prev;
	new->next = tmp;

	if (tmp->prev != NULL)
		tmp->prev->next = new;

	tmp->prev = new;

	if (idx == 0)
		*h = new;

	return (new);
}
