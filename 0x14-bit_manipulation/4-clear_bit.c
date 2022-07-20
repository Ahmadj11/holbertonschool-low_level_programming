#include "main.h"

/**
 * clear_bit - set value of int
 * @n: pointer to next value
 * @index: changes in values
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flag = 1;

	if (n == NULL)
	return (-1);
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	flag = flag << index;
	flag = ~flag;
	*n = *n & flag;
	return (1);
}
