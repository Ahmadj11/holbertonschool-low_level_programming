#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print all of the arguments 
 * @n: number of arguments
 * @separator: strig to print between arguments
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;

	va_start(vl, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (va_arg(vl, int) % 1 != 0)
		{
			break;
		}
		else
		{
			printf(separator == NULL ? "%d" : "%d%s", va_arg(vl, int), separator);
		}
	}
	printf("\n");
}


