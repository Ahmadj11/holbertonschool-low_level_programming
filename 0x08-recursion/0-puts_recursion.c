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
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s++);
}
