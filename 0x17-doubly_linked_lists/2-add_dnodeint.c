#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - the func adds a new node at the
 * beginning of the dlistint_t list.
 * @head: a double pointer to the head of a linked list.
 * @n: the integer to be stored in the new node.
 *
 * Return: return the address of a  new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *var_new_;

	var_new_ = malloc(sizeof(dlistint_t));
	if (var_new_ == NULL)
	{
		return (NULL);
	}

	var_new_->n = n;
	var_new_->prev = NULL;
	var_new_->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = var_new_;
	}

	*head = var_new_;

	return (var_new_);
}
