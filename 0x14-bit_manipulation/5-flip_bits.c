#include "main.h"

/**
 * flip_bits - return bit num
 * @n: number
 * @m: converts number
 * Return: bits
 */

unsigned int flip_bits(unsigned loing int n, unsigned long int m)
{
	unsigned int placement = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		 placement += x & 1;
		 x >>= 1;
	}

	return (placement);
}
