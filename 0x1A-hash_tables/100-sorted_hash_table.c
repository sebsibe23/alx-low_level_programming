#include "hash_tables.h"

/**
 * shash_table_create - function creates a shash table with a given size.
 *
 * @size: size of the shash table.
 * Return: return the created shash table, or NULL if function fails.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newTable;
	shash_node_t **newArray;
	unsigned long int index;
	unsigned long int newSize = size;

	newTable = malloc(sizeof(shash_table_t));
	if (newTable == NULL)
		return (NULL);

	newArray = malloc(sizeof(shash_node_t *) * newSize);
	if (newArray == NULL)
		return (NULL);

	for (index = 0; index < newSize; index++)
		newArray[index] = NULL;

	newTable->array = newArray;
	newTable->size = newSize;
	newTable->shead = NULL;
	newTable->stail = NULL;

	return (newTable);
}


/**
 * add_n_shash - the function adds a node at the beginning
 *  of a shash at a given index.
 * @h: a head of the shash linked list.
 * @key: a key of the shash.
 * @value: a value to store.
 * Return: return created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tempNode;
	shash_node_t **headNode = h;
	const char *newKey = key;
	const char *newValue = value;

	tempNode = *headNode;

	while (tempNode != NULL)
	{
		if (strcmp(newKey, tempNode->key) == 0)
		{
			free(tempNode->value);
			tempNode->value = strdup(newValue);
			return (tempNode);
		}
		tempNode = tempNode->next;
	}

	tempNode = malloc(sizeof(shash_node_t));

	if (tempNode == NULL)
		return (NULL);

	tempNode->key = strdup(newKey);
	tempNode->value = strdup(newValue);
	tempNode->next = *headNode;

	*headNode = tempNode;

	return (tempNode);
}


/**
 * add_i_shash - A function adds a node on the DLL of the shash table
 *
 * @ht: pointer to the table.
 * @new: new node to add.
 * Return: return no return.
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tempNode1, *tempNode2;
	shash_node_t *newNode = new;
	shash_table_t *hashTable = ht;
	int comparisonResult;

	tempNode1 = tempNode2 = hashTable->shead;

	while (tempNode1 != NULL)
	{
		comparisonResult = strcmp(newNode->key, tempNode1->key);
		if (comparisonResult == 0)
		{
			return;
		}
		else if (comparisonResult < 0)
		{
			newNode->sprev = tempNode1->sprev;
			if (tempNode1->sprev)
				tempNode1->sprev->snext = newNode;
			else
				hashTable->shead = newNode;
			tempNode1->sprev = newNode;
			newNode->snext = tempNode1;
			return;
		}
		tempNode2 = tempNode1;
		tempNode1 = tempNode1->snext;
	}

	newNode->sprev = tempNode2;
	newNode->snext = NULL;
	if (hashTable->shead)
		tempNode2->snext = newNode;
	else
		hashTable->shead = newNode;
	hashTable->stail = newNode;
}



/**
 * shash_table_set - a function adds a hash (key, value)
 *  to a given shash table.
 * @ht: pointer to the shash table.
 * @key: key of the shash.
 * @value: value to store.
 * Return: return 1 if successes, 0 if fails.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int keyIndex;
	shash_node_t *newNode;
	shash_table_t *hashTable = ht;
	const char *newKey = key;
	const char *newValue = value;

	if (hashTable == NULL)
		return (0);

	if (newKey == NULL || *newKey == '\0')
		return (0);

	keyIndex = key_index((unsigned char *)newKey, hashTable->size);

	newNode = add_n_shash(&(hashTable->array[keyIndex]), newKey, newValue);

	if (newNode == NULL)
		return (0);

	add_i_shash(hashTable, newNode);

	return (1);
}


/**
 * shash_table_get - the function retrieves
 * a value associated with a key
 * @ht: pointer to the shash table.
 * @key: a key of the shash.
 * Return: return value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int keyIndex;
	shash_node_t *tempNode;
	const shash_table_t *hashTable = ht;
	const char *newKey = key;

	if (hashTable == NULL)
		return (NULL);

	if (newKey == NULL || *newKey == '\0')
		return (NULL);

	keyIndex = key_index((unsigned char *)newKey, hashTable->size);

	tempNode = hashTable->array[keyIndex];

	while (tempNode != NULL)
	{
		if (strcmp(tempNode->key, newKey) == 0)
			return (tempNode->value);
		tempNode = tempNode->next;
	}

	return (NULL);
}

/**
 * shash_table_print - the function prints
 * the keys and values of the shash table
 * @ht: pointer to the shash table.
 * Return: return no return.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tempNode;
	const shash_table_t *hashTable = ht;
	char *separator;

	if (hashTable == NULL)
		return;

	printf("{");
	separator = "";

	tempNode = hashTable->shead;

	while (tempNode != NULL)
	{
		printf("%s'%s': '%s'", separator, tempNode->key, tempNode->value);
		separator = ", ";
		tempNode = tempNode->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - the function prints the keys
 * and values of the shash table in reverse
 *
 * @ht: pointer to the shash table.
 * Return: return no return.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tempNode;
	const shash_table_t *hashTable = ht;
	char *separator;

	if (hashTable == NULL)
		return;

	printf("{");
	separator = "";

	tempNode = hashTable->stail;

	while (tempNode != NULL)
	{
		printf("%s'%s': '%s'", separator, tempNode->key, tempNode->value);
		separator = ", ";
		tempNode = tempNode->sprev;
	}

	printf("}\n");
}
/**
 * shash_table_delete - the function deletes a shash table
 *
 * @ht: a pointer to the shash table.
 * Return: return no return.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *tempNode1, *tempNode2;
	shash_table_t *hashTable = ht;

	if (hashTable == NULL)
		return;

	for (index = 0; index < hashTable->size; index++)
	{
		tempNode1 = hashTable->array[index];
		while ((tempNode2 = tempNode1) != NULL)
		{
			tempNode1 = tempNode1->next;
			free(tempNode2->key);
			free(tempNode2->value);
			free(tempNode2);
		}
	}
	free(hashTable->array);
	free(hashTable);
}

