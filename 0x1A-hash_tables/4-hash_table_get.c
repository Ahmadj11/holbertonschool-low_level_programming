#include "hash_tables.h"

/**
 * hash_table_get - retrun of table
 * @ht: hash table
 * @key: key fot table
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	hash_node_t *top = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	top = ht->array[index];
	while (top)
	{
		if (!strcmp(key, top->key))
		{
			return (top->value);
		}
		top = top->next;
	}
	return (NULL);
}
