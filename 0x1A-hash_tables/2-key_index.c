#include "hash_tables.h"

/**
 * key_index - index that holds keys to table
 * @key: index key
 * @size: size of array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int table;

	if (size == 0)
		return (0);
	table = hash_djb2(key);
	return (table % size);
}
