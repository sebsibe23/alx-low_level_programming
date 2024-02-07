#include <stdlib.h>
#include <math.h>
#include "../search_algos.h"

void free_skiplist(skiplist_t *list);

/**
 * init_express - Initializes the express lane of the linked list
 *
 * @list: Pointer to the head node of the list
 * @size: Number of nodes in the list
 *
 * Description:
 * This function initializes the express lane of a skip list.
 * The express lane is a
 * faster path through the list that allows for quicker
 * traversal during search operations.
 *
 * The function takes in a pointer to the head node of
 * the list and the number of nodes
 * in the list as parameters. It does not return a value.
 *
 * The function starts by calculating the step size for
 * the express lane. The step size
 * is determined as the square root of the total
 * number of nodes in the list.
 *
 * It then enters a loop that iterates over each node in the list.
 * Inside the loop, it
 * checks if the current index is a multiple of the step size.
 * If it is, it assigns the
 * express pointer of the previous node to the current node,
 * effectively creating a link
 * between the nodes in the express lane.
 *
 * The loop continues until it reaches the end of the list,
 * ensuring that the express lane
 * is set up properly.
 *
 * Overall, the function provides a way to initialize
 * the express lane of a skip list,
 * improving the efficiency of search operations on the list.
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t i;
	skiplist_t *save;
	skiplist_t *currentNode;

	for (save = list, i = 0, currentNode = list;
			i < size; ++i, currentNode = currentNode->next)
	{
		if (i % step == 0)
		{
			save->express = currentNode;
			save = currentNode;
		}
	}
}

/**
 * create_skiplist - Create a single linked list
 *
 * @array: Pointer to the array used to fill the list
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created
 * list (NULL on failure)
 *
 * Description:
 * This function creates a singly linked list (skiplist)
 * using the elements from an array.
 * It takes in a pointer to the array and the size of
 * the array as parameters, and returns
 * a pointer to the head of the created list.
 *
 * The function starts by initializing a `list` pointer
 * to NULL and a `save_size` variable
 * to store the original size of the array (to be used later).
 *
 * It then enters a loop that iterates over each element
 * in the array. Inside the loop,
 * it dynamically allocates memory for a new node using `malloc`,
 * and checks if the
 * allocation was successful. If not, it frees the previously
 * allocated nodes and returns
 * NULL to indicate failure.
 *
 * If the allocation is successful, the function proceeds to
 * assign the value of the current
 * array element to the `n` member of the new node, and assigns
 *  the current index to the
 * `index` member of the new node. It sets the `express`
 * pointer of the new node to NULL,
 * as it will be initialized later, and sets the `next`
 * pointer of the new node to the
 * current `list` pointer, effectively inserting the node
 * at the beginning of the list.
 * It then updates the `list` pointer to point to the new node.
 *
 * After the loop finishes, the function calls the `init_express`
 * function to initialize the
 * express lane of the skip list, passing in the `list` pointer
 * and the `save_size` as
 * parameters.
 *
 * Finally, the function returns the `list` pointer, which now
 * points to the head of the
 * created skip list.
 *
 * The function provides a way to create a skip list from an array,
 * allowing for efficient
 * search operations on the list.
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *list;
	skiplist_t *node;
	size_t save_size;

	list = NULL;
	save_size = size;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_skiplist(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->express = NULL;
		node->next = list;
		list = node;
	}
	init_express(list, save_size);
	return (list);
}
