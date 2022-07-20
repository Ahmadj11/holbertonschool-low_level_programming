#include "main.h"

/**
* _strpbrk -  function that searches a string for any of a set of bytes.
* @s: the string that is given
* @accept: new string parameter
* Return: new string parameter
*/

char *_strpbrk(char *s, char *accept)
{
	int x;

	do {
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == *s)
			{
				return (s);
			}
		}
	s++;
	} while (*s != '\0');
	return (0);
}
