#include "main.h"
/**
 * _print_rev - main function
 * @s: var 1
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int x;
	int y;
	char rev;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	for (y = x - 1; y >= x / 2; --y)
	{
		rev = s[y];
		s[y] = s[x - y - 1];
		s[x - y - 1] = rev;
	}
}
