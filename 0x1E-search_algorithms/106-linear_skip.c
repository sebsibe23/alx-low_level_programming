#include "search_algos.h"
/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 *
 * Return: Pointer to the node containing the
 * searched value,
 * or NULL if not found.
 *
 * Description:
 * This function performs a linear search for
 * a given value in a skip list.
 * It takes a pointer to the head of the skip
 * list (`list`) and the value to
 * be searched (`value`) as parameters.
 * The function starts by checking if the `list`
 * parameter is NULL. If it is,
 * the function returns NULL.
 *
 * The function initializes a temporary pointer `go`
 * to the head of the skip list.
 * It then enters a do-while loop that iterates as
 * long as `go` has an express link
 * and the value at `go` (`go->n`) is less than the
 * desired `value`.
 *
 * Inside the loop, the function updates the `list`
 * pointer to the current `go`,
 * and advances `go` to the next node in the express link.
 * The function also prints the value checked at the
 * current index with the format
 * "Value checked at index [index] = [value]".
 *
 * If the loop terminates because `go` does not have
 * an express link or the value at `go`
 * is greater than or equal to the desired `value`,
 * the function enters an if statement to handle the case
 * when `go` does not have an express link.
 * In this case, the function updates the `list` pointer to
 * the current `go` and iterates through
 * the remaining nodes in the next links until the last node is reached.
 *
 * After traversing the skip list based on the express links,
 * the function prints the range where
 * the desired `value` is found with the format "Value
 * found between indexes [start] and [end]".
 *
 * Finally, the function enters a while loop that iterates from the `list`
 * pointer to the next pointer of `go`.
 * Inside the loop, the function prints the value checked at the current index
 * and compares it with the desired `value`.
 * If a match is found, the function returns a pointer to the node containing
 * the searched value.
 *
 * If the loop terminates without finding a match, the function returns NULL,
 * indicating that the value was not found in the skip list.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *go;
	int start_index, end_index;

	if (list == NULL)
		return (NULL);
	go = list;
	do {
		list = go;
		go = go->express;
		start_index = (int)go->index;
		end_index = go->n;
		printf("Value checked at index [%d] = [%d]\n", start_index, end_index);
	} while (go->express && go->n < value);

	if (go->express == NULL)
	{
		list = go;
		while (go->next)
			go = go->next;
	}
	start_index = (int)list->index;
	end_index = (int)go->index;
	printf("Value found between indexes [%d] and [%d]\n", start_index, end_index);

	while (list != go->next)
	{
		start_index = (int)list->index;
		end_index = list->n;
		printf("Value checked at index [%d] = [%d]\n", start_index, end_index);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
