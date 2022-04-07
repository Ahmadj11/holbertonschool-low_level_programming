#include "lists.h"

/**
 * get_dnodeint_at_index - return node
 * @head: head of list
 * @index: node index
 * Return: index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head; a++)
	{
		head = head->next;
	}
	if (!head)
		return (NULL);

	return (head);
}
