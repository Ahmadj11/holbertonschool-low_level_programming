#include "main.h"

/**
* _strcat - function to concatenate string
* @dest: destination array
* @src: source array
* Return: dest array
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int destLength;

	for (destLength = 0; dest[destLength] != '\0'; destLength++)
	{}
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[destLength + x] = src[x];
	}
	dest[destLength + x] = '\0';
	return (dest);
}
