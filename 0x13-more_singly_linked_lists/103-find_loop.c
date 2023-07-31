#include "lists.h"

/**
 * find_listint_loop - func searches a linked list for the loop.
 * @head: the associated list to look up.
 *
 * Return: address of the node where
 * the loop begins as a return value, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lsslow = head;
	listint_t *lsfast = head;

	if (!head)
		return (NULL);

	while (lsslow && lsfast && lsfast->next)
	{
		lsfast = lsfast->next->next;
		lsslow = lsslow->next;
		if (lsfast == lsslow)
		{
			lsslow = head;
			while (lsslow != lsfast)
			{
				lsslow = lsslow->next;
				lsfast = lsfast->next;
			}
			return (lsfast);
		}
	}

	return (NULL);
}

