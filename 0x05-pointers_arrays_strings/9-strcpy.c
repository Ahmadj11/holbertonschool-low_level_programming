#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: where the string sends up
 * @src: the string that was copied
 * Return: ptr to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
