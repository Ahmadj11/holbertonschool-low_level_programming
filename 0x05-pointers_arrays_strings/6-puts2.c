#include "main.h"
/**
 * puts2 - second put
 * @str: var one
 * Return: 0
 */
void puts2(char *str)
{
	int x;
	int y;

	for (x = 0; str[x] != '\0'; x++)
	{
		continue;
	}
	for (y = x; y >= x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
