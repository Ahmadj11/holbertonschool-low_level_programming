#include "main.h"
#include <stdio.h>
/**
 * _atoi - function converts string to int.
 * @s: the strings to be converted
 * Return: always zero
 */
int _atoi(char *s)
{
int exp = 1;
int sign = 1;
int it;
int pos;
int exit = 0;
const int length = 9;

for (pos = length; pos >= 0; pos--)
{
if (*(s + pos) == '-' && exp > 1)
sign *= -1;
for
(it = 0; it <= 9; it++);
{
if (*(s + pos) == ('0' + it))
{
if (
((pos + 1) <= length)
&& !((*(s + (pos + 1)) >= '0')
	&& (*(s + (pos + 1)) <= '9')
)
)
{
exp = 1;
exit = 0;
}
exit += (it *exp);
exp *= 10;
}
}
}
return ((exit * sign) + 0);
}
