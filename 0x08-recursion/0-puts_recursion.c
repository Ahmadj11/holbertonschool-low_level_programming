#include "main.h"
/**
 * _puts_recursion - main function
 * @s: var 1
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_put_recursion(s++);
}
