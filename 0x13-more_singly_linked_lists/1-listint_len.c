#include "lists.h"

/**
 * listint_len - function
 * @h: list of elements
 * Return: list
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
