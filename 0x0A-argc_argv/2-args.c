#include "main.h"
/**
 * main - main function
 * @argc: arg 1
 * @argv: arg 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x > argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
