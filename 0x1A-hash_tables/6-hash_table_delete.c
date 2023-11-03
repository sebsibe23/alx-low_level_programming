#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 *ht: A pointer to the hash table.
 *            This is the hash table that will be deleted.
 *
 * This function iterates over the array of the hash table.
 * For each entry in the array,
 * it traverses the linked list and frees the key and value of each node,
 * then frees the node itself.
 * After all nodes have been freed, it frees the array of the hash
 * table and then the hash table itself.
 * If the hash table is NULL, the function simply
 * returns without doing anything.
 *
 * There is no return value. The function produces output by freeing memory.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int v;
	hash_node_t *varnode, *strtemp;

	if (ht == NULL)
		return;

	for (v = 0; v < ht->size; v++)
	{
		varnode = ht->array[v];
		while (varnode)
		{
			strtemp = varnode->next;
			free(varnode->key);
			free(varnode->value);
			free(varnode);
			varnode = strtemp;
		}
	}
	free(ht->array);
	free(ht);
}
