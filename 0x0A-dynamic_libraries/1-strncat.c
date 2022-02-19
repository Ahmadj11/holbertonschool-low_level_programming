#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * @dest: dest
 * @src: src
 * @n: n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{}
	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
		if (src[i] == '\0')
			break;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
