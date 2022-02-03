#include "main.h"
/**
 * rev_string - reverse flash
 * @s: var one
 * Return: 0
 */
void rev_string(char *s)
{
	int a;
	int b;
	char rev;

		for (a = 0; s[a] != '\0'; a++)
		{
			continue;
		}
		for (b = a - 1; b >= a / 2; --b)
		{
			rev = s[b];
			s[b] = s[a - b - 1];
			s[a - b - 1] = rev;
		}
}
