#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: this is the variable
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
