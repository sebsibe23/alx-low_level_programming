#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list.
 * @head: list_t the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *lstemp;

	while (head)
	{
		lstemp = head->next;
		free(head->str);
		free(head);
		head = lstemp;
	}
}
