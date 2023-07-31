#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - func Counts a number of unique nodes.
 * in the looped linked list.
 * @head: A pointer to the head of the listint_t to evalute.
 *
 * Return: return If the list is not looped - 0.
 * Otherwise - a number of unique nodes in a list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lstortoise, *lshare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lstortoise = head->next;
	lshare = (head->next)->next;

	while (lshare)
	{
		if (lstortoise == lshare)
		{
			lstortoise = head;
			while (lstortoise != lshare)
			{
				nodes++;
				lstortoise = lstortoise->next;
				lshare = lshare->next;
			}

			lstortoise = lstortoise->next;
			while (lstortoise != lshare)
			{
				nodes++;
				lstortoise = lstortoise->next;
			}

			return (nodes);
		}

		lstortoise = lstortoise->next;
		lshare = (lshare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a method Prints the listint_t list safely.
 * @head: the pointer to head of a listint_t list.
 *
 * Return: The count of nodes in a list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t sznodes, szindex = 0;

	sznodes = looped_listint_len(head);

	if (sznodes == 0)
	{
		for (; head != NULL; sznodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (szindex = 0; szindex < sznodes; szindex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (sznodes);
}
