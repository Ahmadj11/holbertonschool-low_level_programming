#include "holberton.h"
/**
 * _strcat - main function
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int length;

for (length = 0; dest[length] != '\0'; length++)
{}

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[length + x] = src[x];
	}
	dest[length + x] = '\0';
	return (dest);
}
