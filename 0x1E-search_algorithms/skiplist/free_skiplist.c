#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 *
 * Description:
 * This function deallocates a singly linked list (skiplist).
 * It takes in a pointer to
 * the head of the list as a parameter and
 * does not return a value.
 *
 * The function first checks if the `list` pointer is not NULL.
 * If it is not NULL, it
 * assigns the `next` pointer of the current
 * node to a temporary `node` pointer. It then
 * frees the memory occupied by the current node using `free`.
 *
 * The function then recursively calls itself with the `node`
 * pointer as the argument,
 * effectively freeing the remaining nodes in the list.
 *
 * The recursion continues until it reaches
 * the end of the list (when the `list` pointer
 * becomes NULL), at which point the function stops
 * calling itself and returns.
 *
 * Overall, the function provides a way to deallocate
 * the memory occupied by a skip list,
 * ensuring that all nodes are properly freed.
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;
	skiplist_t *nextNode;

	if (list)
	{
		nextNode = list->next;
		node = nextNode;
		free(list);
		free_skiplist(node);
	}
}
