#include "lists.h"
/**
 * print_listint - prints all the elements of the linked list.
 * @h: the linked list of type listint_t to print.
 *
 * Return: return number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t strnum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		strnum++;
		h = h->next;
	}

	return (strnum);
}
