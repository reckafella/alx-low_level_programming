#include "hash_tables.h"

/**
 * hash_djb2 - Return a hash value given a key
 * @str: string input treated as key
 *
 * Return: hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int chr;

	hash = 5381;
	while ((chr = *str++))
	{
		hash = ((hash << 5) + hash) + chr; /* hash * 33 + chr */
	}
	return (hash);
}
