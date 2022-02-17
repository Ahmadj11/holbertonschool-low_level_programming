#include "main.h"
#include <string.h>
/**
 * str_concat - main function
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int x = 0;
	int string, length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (string = 0; s1[string] || s2[string]; string++)
	{
	length++;
	}

	ptr = malloc(sizeof(char) * length);

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		ptr[x] = *s1;
		x++;
		s1++;
	}
	while (*s2)
	{
		ptr[x] = *s2;
		x++;
		s2++;
	}
	return (ptr);
}

