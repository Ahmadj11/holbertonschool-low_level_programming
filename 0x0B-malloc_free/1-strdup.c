#include "main.h"
/**
 * _strdup - main function
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, strlen = 0;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[strlen])
	{
		strlen++;
	}
		strlen++;

	ptr = malloc(strlen * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	for (x = 0; x < strlen; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
