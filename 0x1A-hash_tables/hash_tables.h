#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Represents a node in a hash table.
 *
 * @key: A unique key, represented as a string.
 * @value: The value associated with the key.
 * @next: A pointer to the subsequent node in the list.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Represents the structure of a hash table.
 *
 * @size: The size of the array.
 * @array: An array of size @size. Each cell in this
 * array is a pointer
 * to the first node of a linked list. This is to
 * ensure that our HashTable uses a Chaining collision handling method.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
/* Creates a hash table. */
unsigned long int hash_djb2(const unsigned char *str);
/* Implements the djb2 algorithm. */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/* Returns the index of a key. */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/* Adds an element to the hash table. */
char *hash_table_get(const hash_table_t *ht, const char *key);
/* Retrieves a value associated with a key. */
void hash_table_print(const hash_table_t *ht);
/* Prints the hash table. */
void hash_table_delete(hash_table_t *ht);
/* Deletes the hash table. */

#endif

