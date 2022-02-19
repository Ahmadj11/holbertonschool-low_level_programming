#include "main.h"

/**
* _strchr - fuction to locate character in a string
* @s: string to search
* @c: char to reference
* Return: Letter or Null
*/

char *_strchr(char *s, char c)
{
		do {
			if (*s == c)
				return (s);
		}
			while (*s++);
	return (NULL);
}
