#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: pointer to address of the created table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	/* Allocate memory on the heap. Return NULL if malloc fails. */
	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	if(!table->size)
		return (NULL);

	/* Allocate memory for each array. Return NULL if calloc fails. */
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
