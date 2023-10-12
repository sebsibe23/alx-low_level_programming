#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - This function returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * If the list is empty, it returns 0
 * @head: Pointer to the head of the doubly
 * linked list of type dlistint_t.
 *
 * This function returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * If the list is empty, it returns 0.
 *
 * Return: return The sum of all the data in the
 * linked list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int varsum = 0;
	dlistint_t *cur_node = head;


	while (cur_node != NULL)
	{
		varsum += cur_node->n;
		cur_node = cur_node->next;
	}

	return (varsum);
}
