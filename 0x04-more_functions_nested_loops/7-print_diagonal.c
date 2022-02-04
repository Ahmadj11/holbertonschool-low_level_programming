#include "main.h"
/**
 * print_diagonal - draw diagonal line
 * Return: 0
 */
void print_diagonal(int n)
{
	int sl;
	int sp;

	if (n > 0)
{
	for (sl = 0; sl < n; sl++)
{
	for (sp = 0; sp < sl; sp++)
{
	_putchar(' ');
}
_putchar ('\\');
_putchar('\n');
sp = 0;
}
}
else
{
	_putchar('\n');
}
}
