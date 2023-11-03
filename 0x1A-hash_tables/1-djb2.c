#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_djb2 - Implements the djb2 hashing algorithm.
 * @str: The input string, which is unique in the hash table.
 *
 * Return: The computed hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int current_char;
	const unsigned char *input_str = str;

	hash_value = 5381;
	while ((current_char = *input_str++))
	{
		/* hash_value * 33 + current_char */
		hash_value = ((hash_value << 5) + hash_value) + current_char;
	}
	return (hash_value);
}

