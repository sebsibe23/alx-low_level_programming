#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"

/**
 * print_skiplist - dump the content of a skiplist_t
 *
 * @list: Pointer to the head of the list
 *
 * Return: void
 *
 * Description:
 * This function prints the content of a skip list.
 * It takes in a pointer to the head of
 * the list as a parameter and does not return a value.
 *
 * The function starts by printing
 * a header line indicating the start of the list.
 * It then enters a loop that iterates over each node in the list.
 * Inside the loop,
 * it prints the index and value of the current
 * node using the `index` and `n` members
 * of the struct.
 *
 * After printing the nodes in the main list,
 * the function prints a header line indicating
 * the start of the express lane.
 * It then enters another loop that iterates over each node
 * in the express lane. Inside the loop,
 * it prints the index and value of the current node
 * in the express lane.
 *
 * Finally, the function prints
 * a new line character to separate the output.
 *
 * The function provides a way to dump the
 * content of a skip list for debugging and
 * verification purposes.
 */
void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node;

	printf("List :\n");
	for (node = list; node; node = node->next)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\nExpress lane :\n");
	for (node = list; node; node = node->express)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\n");
}
