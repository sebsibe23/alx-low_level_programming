#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list.
 * @head: a pointer to the starting element in a list.
 * @n: data to insert in the new element to list.
 *
 * Return: return pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ls_new;
	listint_t *lsp_temp = *head;

	ls_new = malloc(sizeof(listint_t));
	if (!ls_new)
		return (NULL);

	ls_new->n = n;
	ls_new->next = NULL;

	if (*head == NULL)
	{
		*head = ls_new;
		return (ls_new);
	}

	while (lsp_temp->next)
		lsp_temp = lsp_temp->next;

	lsp_temp->next = ls_new;

	return (ls_new);
}
