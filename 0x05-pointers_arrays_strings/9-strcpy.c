#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: where the string sends up
 * @src: the string that was copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;
	char *s = src;

	for (; *s != '\0'; a++, s++)
	{
		*a = *s;
	}
	return (dest);
}
