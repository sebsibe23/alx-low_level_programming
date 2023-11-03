#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - Computes the index of a key.
 * @key: The key, represented as a string.
 * @size: The size of the array in the hash table.
 *
 * Return: The computed index for the key/value pair in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	const unsigned char *input_key =  key;
	unsigned long int array_size = size;
	return (hash_djb2(input_key) % array_size);
}
