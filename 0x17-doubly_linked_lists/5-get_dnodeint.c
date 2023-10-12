#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -function returns the nth node
 * of a dlistint_t linked list
 * @head: the head of a linked list.
 * @index: the index of the node, starting from 0.
 * This function returns the nth node of a dlistint_t linked list.
 * It iterates over the linked list until it reaches the specified index or
 * the end of the list.
 * If the node at the specified index exists, it returns
 * that node; otherwise, it returns NULL.
 *
 * Return: return the nth node of a dlistint_t linked list,
 * or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur_node;
	unsigned int cur_index;

	cur_node = head;
	for (cur_index = 0; cur_index < index; cur_index++)
	{
		if (cur_node == NULL)
		{
			return (NULL);
		}

		cur_node = cur_node->next;
	}

	return (cur_node);
}


