#include <stdio.h>
/**
* main - entry point
*
* Return: Description of the returned value
*/
int main(void)
{
	char x;
	{
	for (x = 'a'; x <= 'z'; x++)
	if (x != 'e' && x != 'q')
	putchar(x);
	putchar('\n');
	}
	return (0);
}
