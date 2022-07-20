#include "hash_tables.h"
/**
* print_list - prints the elements in the linked list
* @h: The pointer to the hash node
*/

void print_list(hash_node_t *h)
{
while (h)
{
printf("'%s': '%s'", h->key, h->value);
if (h->next)
printf(", ");
h = h->next;
}
}

/**
* hash_table_print - Function to print hash table
* @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int x;
hash_node_t *node = NULL;
char *last_key = NULL;
unsigned long int index;
if (!ht)
return;
for (x = 0; x < ht->size; x++)
{
if (ht->array[x] != NULL)
node = ht->array[x];
}
printf("{");
if (node)
{
last_key = node->key;
index = key_index((const unsigned char *)last_key, ht->size);
for (x = 0; x < ht->size; x++)
{
print_list(ht->array[x]);
if (ht->array[x] && x < index)
printf(", ");
}
}
printf("}\n");
}
