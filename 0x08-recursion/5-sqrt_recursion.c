#include "main.h"
/**
 * _sqrt_recursion - function
 * @n: var 1
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int x;

	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion(x + 1, n));
}
