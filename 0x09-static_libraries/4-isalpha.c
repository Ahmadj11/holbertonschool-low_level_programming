#include "main.h"
/**
* _isalpha - (int c)
* @c: C is the integer
* Return: is (0)
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
