#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated
 * with a key from the hash table.
 * @ht: A pointer to the hash table array.
 * @key: The key, which is a non-empty string.
 *
 * Return: The value associated with the key,
 * or NULL if the key can't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int varzero = 0;
	unsigned long int varindex;
	hash_node_t *hntnode;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	varindex = key_index((unsigned char *)key, ht->size);
	if (ht->array[varindex] == NULL)
		return (NULL);
	if (strcmp(ht->array[varindex]->key, key) == varzero)
		return (ht->array[varindex]->value);
	hntnode = ht->array[varindex];
	while (hntnode != NULL)
	{
		if (strcmp(hntnode->key, key) == varzero)
			return (hntnode->value);
		hntnode = hntnode->next;
	}
	return (NULL);
}
