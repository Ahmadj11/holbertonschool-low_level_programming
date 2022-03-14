#include "main.h"

/**
 * clear_bit - set value of int
 * @n: pointer to next value
 * @index: changes in values
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (0);
}
