#include "lists.h"

/**
 * free_listint_safe - func frees a linked list.
 * @h: pointer to the starting node in the linked list.
 *
 * Return: return number of elements in a freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t sz_len = 0;
	int int_diff;
	listint_t *lsttemp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		int_diff = *h - (*h)->next;
		if (int_diff > 0)
		{
			lsttemp = (*h)->next;
			free(*h);
			*h = lsttemp;
			sz_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			sz_len++;
			break;
		}
	}

	*h = NULL;

	return (sz_len);
}
