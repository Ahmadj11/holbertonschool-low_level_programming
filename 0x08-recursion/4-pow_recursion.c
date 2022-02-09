#include "main.h"
/**
 * _pow_recursion - function for the power
 * @x: var 1
 * @y: var 2
 * Return: return var 1 and 2
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
