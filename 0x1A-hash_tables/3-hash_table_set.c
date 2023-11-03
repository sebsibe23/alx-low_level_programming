#include "hash_tables.h"
/**
 * set_pair - Allocates a key/value pair to the hash table.
 * @key: The key, which is a non-empty string.
 * @value: The value associated with the key. This can be an empty string.
 *
 * Return: A pointer to the new node.
 */
hash_node_t *set_pair(const char *key, const char *value)
{
	const char *input_key = key;
	const char *input_value = value;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));


	if (new_node == NULL)
		return (NULL);
	new_node->key = malloc(strlen(input_key) + 1);
	if (new_node->key == NULL)
		return (NULL);
	new_node->value = malloc(strlen(input_value) + 1);
	if (new_node->value == NULL)
		return (NULL);
	strcpy(new_node->key, input_key);
	strcpy(new_node->value, input_value);
	return (new_node);
}


/**
 * set_pair_only - (no collision) set key:value pair to first array element
 * @ht: pointer to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 * @index: the key's index.
 *
 * Return: the node, or NULL if failed.
 */
int set_pair_only(hash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	hash_node_t *new_node = set_pair(key, value);
	int new_variable = 0;

	if (new_node == NULL)
		return (new_variable);
	new_node->next = NULL;
	ht->array[index] = new_node;
	return (1);
}

/**
 * hash_table_set - the function adds an element to the hash table.
 * @ht: a pointer to a hash table array.
 * @key: a key, a string that cannot be empty.
 * @value: a value associated with the key, can be an empty string.
 *
 * Return: return 1 on success, 0 on error.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int vone = 1;
	int vzero = 0;
	unsigned long int varindex;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (vzero);
	varindex = key_index((unsigned char *)key, ht->size);
	node = ht->array[varindex];
	if (node == NULL)
		return (set_pair_only(ht, key, value, varindex));
	while (node != NULL)
	{
		if (strcmp(node->key, key) == vzero)
		{
			if (strcmp(node->value, value) == vzero)
				return (vone);
			free(node->value);
			node->value = malloc(strlen(value) + vone);
			if (node->value == NULL)
				return (vzero);
			strcpy(node->value, value);
			return (vone);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = set_pair(key, value);
		if (node == NULL)
			return (vzero);
		node->next = ht->array[varindex];
		ht->array[varindex] = node;
		return (vone);
	}
	return (vzero);
}



