#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - the function adds
 * a new node at the end of a list.
 * @head: a double pointer to a head
 * of the linked list.
 * @n: the integer to be stored in a new node.
 *
 * Return: return the address of the
 * new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *strvar_new_;
	dlistint_t *strvar_tail_;

	strvar_new_ = malloc(sizeof(dlistint_t));
	if (strvar_new_ == NULL)
	{
		return (NULL);
	}

	strvar_new_->n = n;
	strvar_new_->next = NULL;

	if (*head == NULL)
	{
		strvar_new_->prev = NULL;
		*head = strvar_new_;
		return (strvar_new_);
	}

	strvar_tail_ = *head;
	while (strvar_tail_->next != NULL)
	{
		strvar_tail_ = strvar_tail_->next;
	}

	strvar_tail_->next = strvar_new_;
	strvar_new_->prev = strvar_tail_;

	return (strvar_new_);
}
