#include "main.h"

/**
 * _islower - check if lowercase if 1
 *
 * @c: checking if 1 is lowercase.
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
