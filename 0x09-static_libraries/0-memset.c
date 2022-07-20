#include "main.h"

/**
* _memset - fills memory with a constant byte.
* @s: pointer
* @b: 1st char being passed
* @n: unsigned int passed
* Return: return
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
	{
		s[x] = b;
	}
		return (s);
}
