#include "holberton.h"
/**
 * reverse_array - function
 * @a: var 1
 * @n: var 2
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int s;
	int i;

	for (s = n - 1; s >= n / 2; s--)
	{
		i = a[s];
		a[s] = a[n - 1 - s];
		a[n - 1 - s] = i;
	}
}
