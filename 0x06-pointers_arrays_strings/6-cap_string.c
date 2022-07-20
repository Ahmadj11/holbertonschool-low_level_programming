#include "holberton.h"
/**
 * cap_string - function
 * @a: var 1
 * Return: 0
 */
char *cap_string(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			if (a[x - 1] == ' ' ||
					a[x - 1] == '\t' ||
					a[x - 1] == '\n' ||
					a[x - 1] == ',' ||
					a[x - 1] == ';' ||
					a[x - 1] == '.' ||
					a[x - 1] == '!' ||
					a[x - 1] == '?' ||
					a[x - 1] == '"' ||
					a[x - 1] == '(' ||
					a[x - 1] == ')' ||
					a[x - 1] == '{' ||
					a[x - 1] == '}' ||
					x == 0)
			{
				a[x] = a[x] - 32;
			}
		}
	}
	return (a);
}
