#include "function_pointers.h"

/**
 * pritn_name - main function
 * @name: name
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *));
{
	if (name != NIULL && f != NULL)
	{
		f(name);
	}
}
