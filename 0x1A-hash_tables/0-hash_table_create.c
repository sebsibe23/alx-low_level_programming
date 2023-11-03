#include "hash_tables.h"
/**
 * hash_table_create - Constructs a hash table.
 * @size: The number of nodes for the new hash table.
 *
 * Return: A pointer to the newly constructed hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int index = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int table_size = size;

	if (hash_table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	hash_table->size = table_size;
	hash_table->array = malloc(sizeof(hash_node_t *) * table_size);
	if (hash_table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; index < table_size; index++)
		hash_table->array[index] = NULL;

	return (hash_table);
}

