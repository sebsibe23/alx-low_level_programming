#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the linked list.
 * @head: double pointer to the list_t list.
 * @str: the new string to be add in the node.
 * Return: return the address of a new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *llnew;
	unsigned int len = 0;

	while (str[len])
		len++;

	llnew = malloc(sizeof(list_t));
	if (!llnew)
		return (NULL);

	llnew->str = strdup(str);
	llnew->len = len;
	llnew->next = (*head);
	(*head) = llnew;

	return (*head);
}
