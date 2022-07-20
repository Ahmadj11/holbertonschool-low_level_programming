#include "main.h"
/**
 * print_rev - prints reverse
 * @s: var one
 * Return: 0
 */
void print_rev(char *s)
{
	int q;
	int w;

	for (q = 0; s[q] != '\0'; q++)
	{
		continue;
	}
	for (w = q - 1; w >= 0; --w)
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}
