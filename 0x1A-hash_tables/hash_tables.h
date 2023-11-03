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

/**
 * Struct: shash_node_s - Represents a node in a sorted hash table.
 *
 * @key: A string representing the unique key in the hash table.
 * @value: The value corresponding to the key.
 * @next: A pointer to the next node in the hash table.
 * @sprev: A pointer to the previous node in the sorted linked list.
 * @snext: A pointer to the next node in the sorted linked list.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * Struct: shash_table_s - Represents a sorted hash table.
 *
 * @size: The size of the array in the hash table.
 * @array: An array of pointers, each pointing to the first 
 * node of a linked list. This is used to handle collisions in the hash table.
 * @shead: A pointer to the first node in the sorted linked list.
 * @stail: A pointer to the last node in the sorted linked list.
 *
 * This data structure represents a sorted hash table.
 * It includes an array for the hash table itself, where collisions are 
 * handled by chaining (each array element points to a linked list of 
 * nodes with the same hash value). It also includes a sorted linked list, 
 * which allows for efficient access to elements in sorted order.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
shash_node_t *add_n_shash(shash_node_t **, const char *, const char *);
void add_i_shash(shash_table_t *ht, shash_node_t *new);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
#endif

