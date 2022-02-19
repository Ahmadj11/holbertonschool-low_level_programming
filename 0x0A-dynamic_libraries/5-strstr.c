#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: the string that does the searching
* @needle: the sub parameter of the string getting searched
* Return: the substring
*/

char *_strstr(char *haystack, char *needle)
{
	int x;
	int string;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (string = 0; needle[string] != '\0'; string++)
		{
			if (needle[string] != haystack[x + string])
			{
				break;
			}
		}
			if (!needle[string])
			{
				return (&haystack[x]);
			}
		}
	return (NULL);
}
