#include "hash_tables.h"
/**
 * free_list - free list
 * @head: list that will be free
 */

void free_list(hash_node_t *head)
{
	hash_node_t *fort;

	while (head)

	{
		fort = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = fort;
	}
}


/**
 * hash_table_delete - deleted hash table
 * @ht: hash tbale that will be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
		free_list(ht->array[x]);
	free(ht->array);
	free(ht);
}
