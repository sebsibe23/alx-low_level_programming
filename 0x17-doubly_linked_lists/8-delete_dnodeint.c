#include "lists.h"

/**
 * delete_dnodeint_at_index - the func Deletes a node at the
 * given position in a doubly linked list.
 * @head: A pointer to the head of  doubly linked list.
 * @index: The position at which the node should be deleted.
 *
 * This function traverses a doubly linked list
 * until it reaches the node at the given index,
 * then deletes this node and adjusts the next
 * and prev pointers of the surrounding nodes to
 * maintain the integrity of the list. If the h
 * head of the list is NULL or if the index is 0,
 * it updates the head of the list to point to
 * the next node and frees the memory of the current head.
 *
 * Return: If the function fails or if the index is out of range - -1.
 *         If the function succeeds - 1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next_node = NULL;
	unsigned int i;

	if (*head == NULL || index == 0)
	{
		next_node = (*head)->next;
		*head = next_node;
		if (next_node != NULL)
		{
			next_node->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}

	next_node = current->next;

	if (next_node == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}

	current->prev->next = next_node;
	next_node->prev = current->prev;
	free(current);

	return (1);
}

