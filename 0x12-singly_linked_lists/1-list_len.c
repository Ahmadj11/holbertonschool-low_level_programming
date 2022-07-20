#include "lists.h"
/**
 * list_len - counts the number of nodes for each element 
 * @h: - linked list of variables
 * Return: the number of elements
 *
 * Description: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int numNodes = 0;

	while (h)
	{
		h = h->next;
		numNodes++;
	}
	return (numNodes);
}
