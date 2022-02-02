#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for upper or lowercase letter c
 * @c: C is uppercase
 * Return: (0)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}

