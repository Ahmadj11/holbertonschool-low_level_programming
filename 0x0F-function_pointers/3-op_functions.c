#include "3-calc.h"

/**
* op_add - adds the integers
* @a: first integer
* @b: second integer
* Return: sum of a & b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts b from a
* @a: first integer
* @b: second integer
* Return: Differance of a & b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies a by b
* @a: first integer
* @b: second integer
* Return: Product of a & b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides a by b
* @a: first integer
* @b: second integer
* Return: result of a divided by b
*/

int op_div(int a, int b)
{
	if (b <= 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
* op_mod - finds remainder of a & b
* @a: first integer
* @b: second integer
* Return: remainder of a & b
*/

int op_mod(int a, int b)
{
	if (b <= 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
