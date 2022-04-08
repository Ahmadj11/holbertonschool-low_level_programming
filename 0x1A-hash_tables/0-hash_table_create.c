#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of hash table
 * Return: pointer of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;

	if (size == 0)
		return (NULL);
	tb = malloc(sizeof(hash_table_t));
	if (!tb)
		return (NULL);
	tb->size = size;
	tb->array = calloc((size_t)tb->size, sizeof(hash_node_t *));
	if (tb->array == NULL)
		return (NULL);
	return (tb);
}
