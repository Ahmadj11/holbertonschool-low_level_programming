#include "holberton.h"
/**
 * _strncat - main string fiunction
 * @dest: destination
 * @src: source
 * @n: var
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int length;

for (length = 0; dest[length] != '\0'; length++)
{}
for (a = 0; a < n && src[a] != '\0'; a++)
{
	dest[length + a] = src[a];
}
dest[length + a] = '\0';
return (dest);
}
