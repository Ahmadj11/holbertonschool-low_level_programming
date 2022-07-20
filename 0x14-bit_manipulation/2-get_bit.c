#include "main.h"

/**
 * get_bit - returning int value
 * @n: number
 * @index: bit selected
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int temp = n >> index;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	return (temp & 1);
}
