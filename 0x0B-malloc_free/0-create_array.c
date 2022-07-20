#include "main.h"
/**
 * create_array - aray creation
 * @size: size of array
 * @c: character
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
