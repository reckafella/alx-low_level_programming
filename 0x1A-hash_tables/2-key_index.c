#include "hash_tables.h"

/**
 * key_index - return the index where a key-value pair should be stored
 * @key: a string of characters
 * @size: size of the hash table
 *
 * Return: index at which to store the key-value pair
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = (hash_djb2(key) % size);

	return (index);
}
