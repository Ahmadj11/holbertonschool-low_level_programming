#include "hash_tables.h"
/**
 * hash_djb2 - function
 * @str: string pointer
 * Return: index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int table;
	int x;

	table = 5381;
	while ((x = *str++))
	{
		table = ((table << 5) + table) + x;
	}
	return (table);
}
