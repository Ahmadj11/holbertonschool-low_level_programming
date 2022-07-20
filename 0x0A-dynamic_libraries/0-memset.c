#include "main.h"
#include <stdio.h>

/**
 * _isupper - this function checks for uppercase characters.
 *
 * @c: - checks if C is uppercase.
 * Return: 1 or 0 true false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
