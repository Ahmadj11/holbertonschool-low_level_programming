#include "holberton.h"
/**
 * string_toupper - function
 * @a: var 1
 * Return: 0
 */
char *string_toupper(char *a)
{
	int x;

	for (x = 0; a[x] != '\0';)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 32;
		}
		x++;
	}
	return (x);
}
