#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function
 * @h: pointer for listing
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
{
	printf("%d\n", h->n);
	h = h->next;
	a++;
}
return (a);
}
