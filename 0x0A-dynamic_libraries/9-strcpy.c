#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function copies a string
 * @dest: destination of copied string
 * @src: string to be copied
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];

	}
	dest[x] = '\0';
	return (dest);
}
