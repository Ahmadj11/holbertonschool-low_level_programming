#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit.
 * @c: C the integer being checked
 * Return: 1 or 0 if true or false
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
