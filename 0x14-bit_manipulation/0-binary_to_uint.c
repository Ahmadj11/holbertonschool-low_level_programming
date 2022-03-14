#include "main.h"
#include "_pow_recursion.c"

/**
 * binary_to_uint - converts binary
 * @b: binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (b == NULL)
	{
		return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
	if (b[a] == '0' || b[a] == '1')
	{
		num <<= 1;
		num += b[a] - '0';
	}
	else
	{
		return (0);
	}
	}
	return (num);
}
