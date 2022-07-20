#include "main.h"
/**
 * _memset - primary function
 * @s: var 1
 * @b: var 2
 * @n: var 3
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0, x < n; x++)
		s[x] = b;
	return (x);
}
