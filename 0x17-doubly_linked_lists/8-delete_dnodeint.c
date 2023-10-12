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
	dlistint_t *cur_node;
	dlistint_t *pr_node;
	unsigned int counter;

	cur_node = *head;

	if (cur_node != NULL)
		while (cur_node->prev != NULL)
			cur_node = cur_node->prev;

	counter = 0;

	while (cur_node != NULL)
	{
		if (counter == index)
		{
			if (counter == 0)
			{
				*head = cur_node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				pr_node->next = cur_node->next;

				if (cur_node->next != NULL)
					cur_node->next->prev = pr_node;
			}

			free(cur_node);
			return (1);
		}
		pr_node = cur_node;
		cur_node = cur_node->next;
		counter++;
	}

	return (-1);
}
