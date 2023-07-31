#include "lists.h"
/**
 * listint_len - returns the number of elements in the linked lists.
 * @h: linked list of type listint_t to the traverse.
 *
 * Return: return number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_ = 0;

	while (h)
	{
		num_++;
		h = h->next;
	}

	return (num_);
}
