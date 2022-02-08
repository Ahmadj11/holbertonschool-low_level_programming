#include "holberton.h"
/**
 * leet - function
 * @a: var 1
 * Return: 0
 */
char *leet(char *a)
{
	int str;
	int codex;
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (str = 0; a[str] != '\0'; str++)
{
for (codex = 0; codex < 10; codex++)
{
if (a[str] == l[codex])
{
a[str] = n[codex];
}
}
}
return (a);
}
