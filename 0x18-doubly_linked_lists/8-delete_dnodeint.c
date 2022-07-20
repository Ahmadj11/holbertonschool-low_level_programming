#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: deleted index
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int a;

	if (!head || !(*head))
		return (-1);

	for (a = 0; a < index; a++)
	{
	curr = curr->next;
if (curr == NULL)
return (-1);
	}
	if (index == 0)
	{
		if (curr->next)
			curr->next->prev = NULL;
		*head = curr->next;
	}
	else
	{
		if (curr->next)
			curr->next->prev = curr->prev;
		if (curr->prev)
			curr->prev->next = curr->next;
	}

	free(curr);
	return (1);
}
