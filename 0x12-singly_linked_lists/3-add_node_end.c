#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds the new node at the end of a linked list.
 *
 * @str: the string to put in the new node.
 * @head: a double pointer to the list_t list.
 * Return: return address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lsnew;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	lsnew = malloc(sizeof(list_t));
	if (!lsnew)
		return (NULL);

	lsnew->str = strdup(str);
	lsnew->len = len;
	lsnew->next = NULL;

	if (*head == NULL)
	{
		*head = lsnew;
		return (lsnew);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = lsnew;

	return (lsnew);
}
