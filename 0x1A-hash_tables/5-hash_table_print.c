#include "hash_tables.h"
/**
 * hash_table_print - Prints the key/value pairs in the hash 
 * table in the order they appear in the array.
 *
 * @ht: A pointer to the hash table.
 *            This is the hash table whose key/value pairs will be printed.
 *
 * This function iterates over the array of the hash table. 
 * For each entry in the array,
 * it traverses the linked list and prints the key/value pairs. 
 * The pairs are separated by
 * commas and enclosed in curly braces. If the hash table is NULL,
 * the function simply returns
 * without doing anything.
 *
 * There is no return value. The function produces output 
 * by printing to the standard output.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *vartemp;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		vartemp = ht->array[i];
		while (vartemp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", vartemp->key, vartemp->value);
			flag = 1;
			vartemp = vartemp->next;
		}
	}
	printf("}\n");
}
