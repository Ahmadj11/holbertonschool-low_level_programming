#include "hash_tables.h"

/**
 * new_node - new node
 * @key: the key
 * @value: the value
 * Return: ptr to the node or NULL
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *nd;

	nd = calloc(1, sizeof(hash_node_t));
	if (!nd)
		return (NULL);
	nd->key = strdup(key);
	if (!nd->key)
	{
		free(nd);
		return (NULL);
	}
	nd->value = strdup(value);
	if (!nd->value)
	{
		free(nd->key);
		free(nd);
		return (NULL);
	}

	return (nd);
}

/**
 * hash_table_set - adds to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *head = NULL;
	unsigned long int index;
	char *new_value;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (!strcmp(key, head->key))
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(head->value);
			head->value = new_value;
			return (1);
		}
		head = head->next;
	}
	new = new_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
