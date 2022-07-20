#include "holberton.h"
/**
 * _strncpy - copy string
 * @dest: var
 * @src: var 2
 * @n: var 3
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
		if (src[a] == '\0')
		{
			while (a < n)
			{
				dest[a] = '\0';
				a++;
			}
		}
	}
	return (dest);
}
