#include "lists.h"

/**
 * add_nodeint - adds a new node at the starting of a linked list.
 * @head: pointer to the first node in a list.
 * @n: data to insert in that new created node.
 *
 * Return: return pointer to the new node, or NULL if it is fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ls;

	new_ls = malloc(sizeof(listint_t));
	if (!new_ls)
		return (NULL);

	new_ls->n = n;
	new_ls->next = *head;
	*head = new_ls;

	return (new_ls);
}
